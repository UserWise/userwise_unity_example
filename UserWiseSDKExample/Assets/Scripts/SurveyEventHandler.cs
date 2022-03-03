using System;
using System.Text;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Common.Modules;
using UserWiseSDK.Surveys;

public static class SurveyEventHandler
{
    public static void OnLoaded(object sender, OnLoadedEventArgs args)
    {
        SurveysModule surveysModule = UserWise.INSTANCE.SurveysModule;
        Debug.Log(String.Format("Surveys have been loaded!  {0} Available | {1} Upcoming", surveysModule.Active.Count, surveysModule.Upcoming.Count));
    }

    public static void OnActive(object sender, OnActiveEventArgs<Survey> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Survey Available!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("| Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("| Questions Count: {0}", args.Record.QuestionsCount));
        Debug.Log(stringBuilder.ToString());

        UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
        component.InitializeSurveyInvite(args.Record);
    }

    public static void OnInactive(object sender, OnInactiveEventArgs<Survey> args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Survey Unavailable!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Record.Id));
        stringBuilder.AppendLine(String.Format("| Name: {0}", args.Record.Name));
        stringBuilder.AppendLine(String.Format("| Questions Count: {0}", args.Record.QuestionsCount));
        Debug.Log(stringBuilder.ToString());
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
        Debug.Log("UserWise survey was exited.");

        SurveysModule surveysModule = UserWise.INSTANCE.SurveysModule;
        if (surveysModule.Active.Count > 0) {
            UserWiseDemoComponent component = GameObject.Find("GameControllerObject").GetComponent<UserWiseDemoComponent>();
            component.InitializeSurveyInvite(surveysModule.Active[0]);
        }
    }

    public static void OnSurveyCompleted(object sender, SurveyResponseIdEventArgs args)
    {
        Debug.Log("UserWise survey was completed");
    }
}
