// Below is an example of a push notification integration. To enable the integration please setup the Firebase
// Unity package, and then flip the macro below to true, or delete it in its entirety.
#if false
using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.PushNotifications;

public static class PushNotificationsIntegration
{

    private static MonoBehaviour Mb = null;

    static Firebase.FirebaseApp App = null;
    static bool IsFirebaseInitialized() => App != null;

    static string DeviceToken = null;
    static bool IsDeviceTokenInitialized() => DeviceToken != null;

    public static void Configure(MonoBehaviour mb)
    {
        Mb = mb;
        Mb.StartCoroutine(ListenForDeviceToken());

        Firebase.FirebaseApp.CheckAndFixDependenciesAsync()
            .ContinueWith(async task =>
            {
                var dependencyStatus = task.Result;
                if (dependencyStatus == Firebase.DependencyStatus.Available)
                {
                    App = Firebase.FirebaseApp.DefaultInstance;
                    Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;
                    DeviceToken = await Firebase.Messaging.FirebaseMessaging.GetTokenAsync();
                }
                else
                {
                    UnityEngine.Debug.LogError(System.String.Format(
                        "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                }
            });
    }

    public static IEnumerator ListenForDeviceToken()
    {
        while (!IsDeviceTokenInitialized())
        {
            yield return new WaitForSeconds(1);
        }

        RegisterDeviceToken();
    }

    public static void RegisterDeviceToken()
    {
        NotificationPlatform platform = (Application.platform == RuntimePlatform.Android) ?
            NotificationPlatform.fcm :
            NotificationPlatform.apns;

        UnityEngine.Debug.Log("Registering device token & platform combination: platform=" + platform.ToString("G") + " device_token=" + DeviceToken);
        UserWise.INSTANCE.PushNotificationsModule.RegisterDeviceToken(platform, DeviceToken, (success) =>
        {
            UnityEngine.Debug.Log("Device token registration succeeded? " + success);
        });
    }

    public static void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e)
    {
        IDictionary<string, string> data = e.Message.Data;
        Firebase.Messaging.FirebaseNotification notification = e.Message.Notification;
        string msg = "Received a new push notification!\n";

        msg = string.Format("{0}\ntitle={1}\nbody={2}", msg, notification.Title, notification.Body);
        foreach(var key in data.Keys)
        {
            msg = string.Format("{0}\ndata[{1}]={2}", msg, key, data[key]);
        }
        UnityEngine.Debug.Log(msg);

        // load all notification information (including framework):
        UserWise.INSTANCE.PushNotificationsModule.GetPushNotification(data["push_notification_id"], (PushNotification pn) =>
        {
            if (pn == null) return;

            UnityEngine.Debug.Log("Got push notification data for id=" + pn.Id);

            // pn.Id
            // pn.Title
            // pn.Body
            // pn.ImageId
            // pn.FrameworkData
            // pn.FrameworkDataRaw
        });

        // load all of an impression's data:
        UserWise.INSTANCE.PushNotificationsModule.GetPushNotificationImpression(data["impression_id"], (PushNotificationImpression impression) =>
        {
            if (impression == null) return;

            UnityEngine.Debug.Log("Got impression data for id=" + impression.Id);

            // impression.Id
            // impression.StartAt
            // impression.DeviceToken
            // impression.State
            // impression.PushNotificationId
        });

        // change an impression's state:
        UserWise.INSTANCE.PushNotificationsModule.UpdateImpressionState(data["impression_id"], PushNotificationImpression.ImpressionState.viewed, (bool success) =>
        {
            if (!success) return;

            UnityEngine.Debug.Log("Updated state for impression_id=" + data["impression_id"]);
        });
    }

}
#endif