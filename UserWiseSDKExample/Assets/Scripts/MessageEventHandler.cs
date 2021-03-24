using System;
using System.Text;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Messages;

public static class MessageEventHandler
{
    public static void OnMessagesLoaded(object sender, EventArgs args)
    {
        Debug.Log(String.Format("Messages have been loaded from the API!  {0} Messages Available", UserWise.INSTANCE.MessagesModule.ActiveMessages.Count));
    }

    public static void OnMessageAvailable(object sender, MessageEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("A message is ready for viewing!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Message.Id));
        stringBuilder.AppendLine(String.Format("| Title: {0}", args.Message.Title));
        stringBuilder.AppendLine(String.Format("| Body: {0}", args.Message.Body));
        stringBuilder.AppendLine(String.Format("| Portrait Image ID: {0}", args.Message.PortraitImageId));
        stringBuilder.AppendLine(String.Format("| Landscape Image ID: {0}", args.Message.LandscapeImageId));
        stringBuilder.AppendLine(String.Format("| Message Type: {0}", args.Message.MessageType));
        stringBuilder.AppendLine(String.Format("| Additional Fields: {0}", args.Message.AdditionalFields));
        Debug.Log(stringBuilder.ToString());

        // You can also convert the AdditionalFields dictionary into any data object
        // class by calling args.Message.GetAdditionalFieldsAs<MyAdditionalFields>(defaultValue);

        // The message can be removed by calling:
        //   UserWise.INSTANCE.MessagesModule.RemoveMessage(args.Message);
    }
}
