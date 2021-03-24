using System;
using System.Text;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Events;

public static class GameEventHandler
{
    public static void OnEventsLoaded(object sender, OnEventsLoadedEventArgs args)
    {
        Debug.Log(String.Format("Game Events have been loaded from the API!  {0} Game Events Available", UserWise.INSTANCE.MessagesModule.ActiveMessages.Count));
    }

    public static void OnEventActive(object sender, OnEventActiveEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("An Event Is Active!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Event.Id));
        stringBuilder.AppendLine(String.Format("| Name: {0}", args.Event.Name));
        stringBuilder.AppendLine(String.Format("| External ID: {0}", args.Event.ExternalId));
        stringBuilder.AppendLine(String.Format("| External Event Type: {0}", args.Event.ExternalEventType));
        stringBuilder.AppendLine(String.Format("| Data: {0}", args.Event.Data));
        Debug.Log(stringBuilder.ToString());
    }
}
