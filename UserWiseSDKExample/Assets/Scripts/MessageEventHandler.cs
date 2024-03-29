﻿using System;
using System.Text;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Common.Modules;
using UserWiseSDK.Messages;

public static class MessageEventHandler
{
    public static void OnLoaded(object sender, OnLoadedEventArgs args)
    {
        MessagesModule messagesModule = UserWise.INSTANCE.MessagesModule;
        Debug.Log(String.Format("Messages have been loaded from the API!  {0} Available | {1} Upcoming", messagesModule.Active.Count, messagesModule.Upcoming.Count));
    }

    public static void OnActive(object sender, OnActiveEventArgs<Message> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Message Available!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("| Title: {0}", args.Record.Title));
        stringBuilder.AppendLine(String.Format("| Body: {0}", args.Record.Body));
        stringBuilder.AppendLine(String.Format("| Portrait Image ID: {0}", args.Record.PortraitImageId));
        stringBuilder.AppendLine(String.Format("| Landscape Image ID: {0}", args.Record.LandscapeImageId));
        stringBuilder.AppendLine(String.Format("| Message Type: {0}", args.Record.MessageType));
        stringBuilder.AppendLine(String.Format("| Additional Fields: {0}", args.Record.AdditionalFields));
        stringBuilder.AppendLine(String.Format("| Additional Fields Raw: {0}", args.Record.AdditionalFieldsRaw));
        Debug.Log(stringBuilder.ToString());

        // Once a message is active, you should initialize it prior to displaying:
        //
        // UserWise.INSTANCE.MessagesModule.InitializeMessage(args.Record);
    }

    public static void OnInactive(object sender, OnInactiveEventArgs<Message> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Message Unavailable!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("| Title: {0}", args.Record.Title));
        stringBuilder.AppendLine(String.Format("| Body: {0}", args.Record.Body));
        stringBuilder.AppendLine(String.Format("| Portrait Image ID: {0}", args.Record.PortraitImageId));
        stringBuilder.AppendLine(String.Format("| Landscape Image ID: {0}", args.Record.LandscapeImageId));
        stringBuilder.AppendLine(String.Format("| Message Type: {0}", args.Record.MessageType));
        stringBuilder.AppendLine(String.Format("| Additional Fields: {0}", args.Record.AdditionalFields));
        Debug.Log(stringBuilder.ToString());
    }

    public static void OnMessageInitializationFailed(object sender, OnMessageInitializationFailedEventArgs args)
    {
        // TODO: Handle initialization failure, don't show message (usually).
    }

    public static void OnMessageInitialized(object sender, OnMessageInitializedEventArgs args)
    {
        // TODO: Show message
    }
}
