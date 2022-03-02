using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Common.Modules;
using UserWiseSDK.RemoteConfigs;

public static class RemoteConfigEventHandler
{
    public static void OnLoaded(object sender, OnLoadedEventArgs args)
    {
        RemoteConfigsModule remoteConfigsModule = UserWise.INSTANCE.RemoteConfigsModule;
        Debug.Log(String.Format("Remote Configs have been loaded from the API!  {0} Available | {1} Upcoming", remoteConfigsModule.Active.Count, remoteConfigsModule.Upcoming.Count));
    }

    public static void OnActive(object sender, OnActiveEventArgs<RemoteConfig> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Remote Config Active:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Record.ExternalId));
        stringBuilder.AppendLine(String.Format("|- Json: {0}", args.Record.Json));
        Debug.Log(stringBuilder.ToString());
    }

    public static void OnInactive(object sender, OnInactiveEventArgs<RemoteConfig> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Remote Config Inactive:");
        stringBuilder.AppendLine(String.Format("|- ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("|- Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("|- External ID: {0}", args.Record.ExternalId));
        stringBuilder.AppendLine(String.Format("|- Json: {0}", args.Record.Json));
        Debug.Log(stringBuilder.ToString());
    }

    public static void DeserializeExampleRemoteConfigData(RemoteConfig remoteConfig)
    {
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
            RemoteConfigRewardsData rewards = remoteConfig.GetJsonAsObject(new RemoteConfigRewardsData());

            // If you have a root-level array, you can follow the same steps above by
            // calling:
            //
            // List<RemoteConfigRewardsData> rewards = gameEvent.GetJsonAsList(new RemoteConfigRewardsData());
        }
        catch
        {
            Debug.Log("Couldn't deserialize example data with received event.");
        }
    }

    public class RemoteConfigRewardsData : IDictSerializable<RemoteConfigRewardsData>
    {
        List<Reward> Rewards;

        RemoteConfigRewardsData IDictSerializable<RemoteConfigRewardsData>.Deserialize(Dictionary<string, object> data)
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
        Dictionary<string, object> IDictSerializable<RemoteConfigRewardsData>.Serialize() { throw new NotImplementedException(); }
    }

    public class Reward : IDictSerializable<Reward>
    {
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