using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.PushNotifications;

public static class PushNotificationsIntegration
{

    static Firebase.FirebaseApp App = null;
    static bool IsFirebaseInitialized() => App != null;

    public static void Configure()
    {
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(async task => {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                App = Firebase.FirebaseApp.DefaultInstance;
                Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;

                var deviceToken = await Firebase.Messaging.FirebaseMessaging.GetTokenAsync();
                UnityEngine.Debug.Log("Retrieved device token: " + deviceToken);
                RegisterDeviceToken(deviceToken);
            }
            else
            {
                UnityEngine.Debug.LogError(System.String.Format(
                    "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
            }
        });
    }

    public static void RegisterDeviceToken(string deviceToken)
    {
        NotificationPlatform platform = (Application.platform == RuntimePlatform.Android) ?
            NotificationPlatform.fcm :
            NotificationPlatform.apns;

        UnityEngine.Debug.Log("Registering device token & platform combination: platform=" + platform.ToString("G") + " device_token=" + deviceToken);
        UserWise.INSTANCE.PushNotificationsModule.RegisterDeviceToken(platform, deviceToken, (success) =>
        {
            UnityEngine.Debug.Log("Device token registration succeeded? " + success);
        });
    }

    public static void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e)
    {
        UnityEngine.Debug.Log("Received a new message from: " + e.Message.From);
    }

}
