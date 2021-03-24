using System;
using System.Text;
using UnityEngine;
using UserWiseSDK.Surveys;

public static class SurveyEventHandler
{
    public static void OnSurveysLoaded(object sender, EventArgs args)
    {
        Debug.Log(String.Format("Surveys have been loaded!  {0} Surveys Available", ((SurveysModule)sender).ActiveSurveys.Count));
    }

    public static void OnSurveyAvailable(object sender, SurveyEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("A survey is ready for taking!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Survey.Id));
        stringBuilder.AppendLine(String.Format("| Questions Count: {0}", args.Survey.QuestionsCount));
        Debug.Log(stringBuilder.ToString());

        UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
        component.InitializeSurveyInvite(args.Survey);
    }

    public static void OnSurveyInviteInitialized(object sender, SurveyInviteInitializedEventArgs args)
    {
        if (args.WasInitialized)
        {
            UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
            SurveyInviteComponent surveyInviteComponent = component.surveyInviteDialog.GetComponent<SurveyInviteComponent>();
            surveyInviteComponent.ShowInviteDialog(args.Survey, args.ResponseId, args.InviteId);
        }
        else
        {
            Debug.LogWarning("Survey invite failed to initialize!");
        }
    }

    public static void OnSurveyEntered(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("UserWise survey is loading...");
    }

    public static void OnSurveyEnterFailed(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("UserWise survey failed to load");
    }

    public static void OnSurveyClosed(object sender, SurveyResponseIdEventArgs args)
    {
        // This is called with or without completed. Use this + onSurveyEnterFailed
        // to regain control of your game.
        Debug.Log("UserWise survey was exited.");
    }

    public static void OnSurveyCompleted(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("UserWise survey was completed");
    }
}
