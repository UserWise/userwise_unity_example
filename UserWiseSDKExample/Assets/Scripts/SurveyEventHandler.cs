using System;
using UnityEngine;

public static class SurveyEventHandler
{
    public static void OnSurveyAvailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: Survey(s) are available!");
        UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
        component.InitializeSurveyInvite();
    }

    public static void OnSurveysUnavailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: No surveys are currently available to take.");
    }

    public static void OnSurveyEntered(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey is loading...");
    }

    public static void OnSurveyEnterFailed(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey failed to load");
    }

    public static void OnSurveyClosed(object sender, EventArgs args)
    {
        // This is called with or without completed. Use this + onSurveyEnterFailed
        // to regain control of your game.
        Debug.Log("[UW Example]: UserWise survey was exited.");
    }

    public static void OnSurveyCompleted(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey was completed");
    }
}
