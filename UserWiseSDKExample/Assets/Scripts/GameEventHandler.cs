using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Common.Modules;
using UserWiseSDK.Events;

public static class GameEventHandler
{
    public static void OnLoaded(object sender, OnLoadedEventArgs args)
    {
        EventsModule eventsModule = UserWise.INSTANCE.EventsModule;
        Debug.Log(String.Format("Game Events have been loaded from the API!  {0} Available | {1} Upcoming", eventsModule.Active.Count, eventsModule.Upcoming.Count));
    }

    public static void OnActive(object sender, OnActiveEventArgs<GameEvent> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Event Active:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Record.ExternalId));
        stringBuilder.AppendLine(String.Format("|- External Event Type: {0}", args.Record.ExternalEventType));
        stringBuilder.AppendLine(String.Format("|- Data: {0}", args.Record.Data));
        Debug.Log(stringBuilder.ToString());

        // this.DeserializeExampleGameEventData(args.Event);
    }

    public static void OnInactive(object sender, OnInactiveEventArgs<GameEvent> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Event Inactive:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Record.ExternalId));
        stringBuilder.AppendLine(String.Format("|- External Event Type: {0}", args.Record.ExternalEventType));
        stringBuilder.AppendLine(String.Format("|- Data: {0}", args.Record.Data));
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

            // We will deserialize the data structure above, just abstracted
            // a little through UserWise's IDictSerializable.  You can see the classes below.
            EventRewardsData rewards = gameEvent.GetDataAsObject(new EventRewardsData());
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
