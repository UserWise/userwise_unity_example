using System;
using UnityEngine;
using UserWiseSDK.Surveys;

public static class SurveyEventHandler
{
    public static void OnSurveysUnavailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: No surveys are currently available to take.");
    }

    public static void OnSurveyAvailable(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("[UW Example]: Survey(s) are available!");
        UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
        component.InitializeSurveyInvite(args.ResponseId);
    }


    public static void OnSurveyInviteInitialized(object sender, SurveyInviteInitializedEventArgs args)
    {
        if (args.WasInitialized)
        {
            SurveyInviteComponent component = GameObject.Find("GameControllerObject").GetComponent<SurveyInviteComponent>();
            component.ShowInviteDialog(args.ResponseId, args.InviteId);
        }
        else
        {
            Debug.LogWarning("Survey invite failed to initialize!");
        }
    }

    public static void OnSurveyEntered(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey is loading...");
    }

    public static void OnSurveyEnterFailed(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey failed to load");
    }

    public static void OnSurveyClosed(object sender, SurveyResponseIdEventArgs args)
    {
        // This is called with or without completed. Use this + onSurveyEnterFailed
        // to regain control of your game.
        Debug.Log("[UW Example]: UserWise survey was exited.");
    }

    public static void OnSurveyCompleted(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey was completed");
    }
}
