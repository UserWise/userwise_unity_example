using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Events;

public static class GameEventHandler
{
    public static void OnEventsLoaded(object sender, OnEventsLoadedEventArgs args)
    {
        EventsModule eventsModule = UserWise.INSTANCE.EventsModule;
        Debug.Log(String.Format("Game Events have been loaded from the API!  {0} Available | {1} Upcoming", eventsModule.ActiveEvents.Count, eventsModule.UpcomingEvents.Count));
    }

    public static void OnEventActive(object sender, GameEventEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Event Active:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Event.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Event.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Event.ExternalId));
        stringBuilder.AppendLine(String.Format("|- External Event Type: {0}", args.Event.ExternalEventType));
        stringBuilder.AppendLine(String.Format("|- Data: {0}", args.Event.Data));
        Debug.Log(stringBuilder.ToString());

        // this.DeserializeExampleGameEventData(args.Event);
    }

    public static void OnEventInactive(object sender, GameEventEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Event Inactive:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Event.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Event.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Event.ExternalId));
        stringBuilder.AppendLine(String.Format("|- External Event Type: {0}", args.Event.ExternalEventType));
        stringBuilder.AppendLine(String.Format("|- Data: {0}", args.Event.Data));
        Debug.Log(stringBuilder.ToString());

        // this.DeserializeExampleGameEventData(args.Event);
    }

    public static void DeserializeExampleGameEventData(GameEvent gameEvent) {
        try
        {
            // Data Deserialization Example 1: (manual)
            //
            // We will deserialize a rewards list with the following structure:
            //
            // {
            //   "rewards": [
            //     { "points_required": 50, item_ids: [100, 202] },
            //     { "points_required": 100, item_ids: [30, 2010] }
            //   ]
            // }
            //
            // Note: probably use safer methods of type conversion :-)

            /// Get our rewards list/array and do proper type conversions...
            object rawRewardsListObj;
            gameEvent.Data.TryGetValue("rewards", out rawRewardsListObj);
            List<object> rewardsList = (List<object>)rawRewardsListObj;

            List<Dictionary<string, object>> convertedRewardsList = new List<Dictionary<string, object>>();
            rewardsList.ForEach((rewardGroup) =>
            {
                convertedRewardsList.Add((Dictionary<string, object>)rewardGroup);
            });

            /// ...now, whenever we want the points_required (of the first array item) we do...
            object rawPointsRequiredObj;
            convertedRewardsList[0].TryGetValue("points_required", out rawPointsRequiredObj);
            int pointsRequired = (int)rawPointsRequiredObj;

            /// ...same with item_ids
            object rawItemIdsListObj;
            gameEvent.Data.TryGetValue("item_ids", out rawItemIdsListObj);
            List<object> rawItemIdsList = (List<object>)rawItemIdsListObj;

            List<int> itemIdsList = new List<int>();
            rawItemIdsList.ForEach((itemId) => itemIdsList.Add((int)itemId));


            // Data Deserialization Example 2: (IDictSerializable)
            //
            // We will deserialize the same structure as above, just abstracted
            // a little through IDictSerializable.  You can see the classes below.
            EventRewardsData rewards = gameEvent.GetDataAs(new EventRewardsData());
        } catch {
            Debug.Log("Couldn't deserialize example data with received event.");
        }
    }

    public class EventRewardsData : IDictSerializable<EventRewardsData>
    {
        List<Reward> Rewards;

        EventRewardsData IDictSerializable<EventRewardsData>.Deserialize(Dictionary<string, object> data)
        {
            this.Rewards = new List<Reward>();

            // NOTE: this can be wrapped in an reusable extension; or we can expose ours smaller wrapper
            object rawRewardsListObj;
            data.TryGetValue("rewards", out rawRewardsListObj);

            List<object> rewardsList = (List<object>)rawRewardsListObj;
            rewardsList.ForEach((rewardDataObj) =>
            {
                Dictionary<string, object> rewardDataDict = (Dictionary<string, object>)rewardDataObj;
                this.Rewards.Add((new Reward() as IDictSerializable<Reward>).Deserialize(rewardDataDict));
            });

            return this;
        }

        // this is optional.
        Dictionary<string, object> IDictSerializable<EventRewardsData>.Serialize() { throw new NotImplementedException(); }
    }

    public class Reward : IDictSerializable<Reward> {
        int PointsRequired;
        List<int> ItemIds;

        Reward IDictSerializable<Reward>.Deserialize(Dictionary<string, object> data)
        {
            object rawPointsRequiredObj;
            data.TryGetValue("points_required", out rawPointsRequiredObj);
            this.PointsRequired = (int)rawPointsRequiredObj;

            object rawItemIdsListObj;
            data.TryGetValue("item_ids", out rawItemIdsListObj);
            List<object> rawItemIdsList = (List<object>)rawItemIdsListObj;
            this.ItemIds = new List<int>();
            rawItemIdsList.ForEach((itemId) => this.ItemIds.Add((int)itemId));

            return this;
        }

        // this is optional.
        Dictionary<string, object> IDictSerializable<Reward>.Serialize() { throw new NotImplementedException(); }
    }
}
