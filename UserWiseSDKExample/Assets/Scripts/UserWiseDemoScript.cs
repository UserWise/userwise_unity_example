using UnityEngine;
using UnityEngine.UI;
using UserWiseSDK;
using System.Text;
using System.IO;
using System;

public class UserWiseDemoScript : MonoBehaviour
{
    public Button takeSurveysButton;
    public Button forcefullyRefreshSurveysButton;

    private UserWise userwiseInstance;

    void Start()
    {
        this.userwiseInstance = UserWise.INSTANCE;

        string apiKey = "6b6552ebc324a570262deb6bdd4e";
        byte[] apiKeyBytes = Encoding.UTF8.GetBytes(apiKey);
        string b64EncodedApiKey = Convert.ToBase64String(apiKeyBytes);

        this.userwiseInstance = UserWise.INSTANCE;
        this.userwiseInstance.debugMode = true;
        this.userwiseInstance.apiKey = b64EncodedApiKey;
        this.userwiseInstance.userId = "userwise-unity-example";

        // UserWise initialization and survey event handling delegation can
        // be setup at any point during the Unity lifecycle. However, both
        // the SetColors and SetSplashScreenLogo methods *MUST* be called
        // during or after the first game object's Start method.

        //this.userwiseInstance.SetColors("#FFFFFF", "#361688");

        //string logoName = "userwise_hero_wars_logo.png";
        //string logoPath = Path.Combine(Application.streamingAssetsPath, logoName);

#if UNITY_ANDROID
        //UnityWebRequest www = UnityWebRequest.Get(logoPath);
        //UnityWebRequestAsyncOperation asyncOp = www.SendWebRequest();
        //asyncOp.completed += (_) =>
        //{
        //    string androidLogoPath = Path.Combine(Application.persistentDataPath, logoName);
        //    File.WriteAllBytes(androidLogoPath, www.downloadHandler.data);
        //    this.userwiseInstance.SetSplashScreenLogo(androidLogoPath);
        //};
#else
        //this.userwiseInstance.SetSplashScreenLogo(logoPath);
#endif

        this.userwiseInstance.surveyEvents.SurveyAvailable += this.OnSurveyAvailable;
        this.userwiseInstance.surveyEvents.SurveysUnavailable += this.OnSurveysUnavailable;
        this.userwiseInstance.surveyEvents.SurveyEntered += this.OnSurveyEntered;
        this.userwiseInstance.surveyEvents.SurveyEnterFailed += this.OnSurveyEnterFailed;
        this.userwiseInstance.surveyEvents.SurveyClosed += this.OnSurveyClosed;
        this.userwiseInstance.surveyEvents.SurveyCompleted += this.OnSurveyCompleted;

        takeSurveysButton.onClick.AddListener(TakeUserWiseSurveys);
        forcefullyRefreshSurveysButton.onClick.AddListener(ForcefullyRefreshSurveys);
    }

    void TakeUserWiseSurveys()
    {
        if (!this.userwiseInstance.isTakingSurvey)
        {
            this.userwiseInstance.TakeNextSurvey();
        }
    }

    void ForcefullyRefreshSurveys()
    {
        this.userwiseInstance.RefreshHasAvailableSurveys();
    }

    void OnSurveyAvailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: Survey(s) are available!");
    }

    void OnSurveysUnavailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: No surveys are currently available to take.");
    }

    void OnSurveyEntered(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey is loading...");
    }

    void OnSurveyEnterFailed(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey failed to load");
    }

    void OnSurveyClosed(object sender, EventArgs args)
    {
        // This is called with or without completed. Use this + enter failed
        // to regain control of your game.
        Debug.Log("[UW Example]: UserWise survey was exited.");
    }

    void OnSurveyCompleted(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: UserWise survey was completed");
    }
}
