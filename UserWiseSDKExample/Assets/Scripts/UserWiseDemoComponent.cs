using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using System.Collections.Generic;
using UserWiseSDK;
using UserWiseSDK.Surveys;
using UserWiseSDK.Offers;
using UserWiseSDK.API.Structs;

public class UserWiseDemoComponent : MonoBehaviour
{
    public GameObject surveyInviteDialog;
    public Button forcefullyRefreshSurveysButton;

    private UserWise userwiseInstance;
    private SurveyInviteComponent surveyInviteComponent;

    void Start()
    {
        // Step 1
        // Initialize the UserWise SDK, and confirm that the poller is
        // running. Initialization will occur after the first OnStart call.
        if (!UserWise.INSTANCE.IsInitialized())
        {
            ConfigureUserWiseSDK();
        }

        // Step 2
        // You must configure any modules that you plan to use within your game.
        // Currently, there exists both a SurveysModule and an OffersModule.
        ConfigureSurveysModule();
        ConfigureOffersModule();

        userwiseInstance.OnStart();

        AssignEvent();
        AssignAttribute();
    }

    private void SetupScene()
    { 
        surveyInviteComponent = surveyInviteDialog.GetComponent<SurveyInviteComponent>();
        this.forcefullyRefreshSurveysButton.onClick.AddListener(ForcefullyRefreshSurveys);
    }

    private void ConfigureUserWiseSDK()
    {
        this.userwiseInstance = UserWise.INSTANCE;

        string apiKey = "f0d040021dcb9f26765e25da6b57";
        byte[] apiKeyBytes = Encoding.UTF8.GetBytes(apiKey);
        string b64EncodedApiKey = Convert.ToBase64String(apiKeyBytes);

        this.userwiseInstance = UserWise.INSTANCE;
        this.userwiseInstance.debugMode = true;
        this.userwiseInstance.SetApiKey(b64EncodedApiKey);
        this.userwiseInstance.userId = "userwise-unity-example-user";
    }

    private void ConfigureSurveysModule()
    { 
        SurveysModule surveysModule = this.userwiseInstance.surveysModule;

        // The splash screen can be configured by setting a primary and background
        // color, as well as the logo that displays (defaults to the UserWise logo).

        // Update Splash Screen Colors
        //surveysModule.SetColors("#FFFFFF", "#361688");

        // Update Splash Screen Logo
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

        // Finally, you have to listen on any events you'd like to manage.
        surveysModule.SurveyEvents.OnSurveyAvailable += SurveyEventHandler.OnSurveyAvailable;
        surveysModule.SurveyEvents.OnSurveysUnavailable += SurveyEventHandler.OnSurveysUnavailable;
        surveysModule.SurveyEvents.OnSurveyInviteInitialized += SurveyEventHandler.OnSurveyInviteInitialized;
        surveysModule.SurveyEvents.OnSurveyEntered += SurveyEventHandler.OnSurveyEntered;
        surveysModule.SurveyEvents.OnSurveyEnterFailed += SurveyEventHandler.OnSurveyEnterFailed;
        surveysModule.SurveyEvents.OnSurveyClosed += SurveyEventHandler.OnSurveyClosed;
        surveysModule.SurveyEvents.OnSurveyCompleted += SurveyEventHandler.OnSurveyCompleted;
    }

    private void ConfigureOffersModule()
    {
        OffersModule offersModule = this.userwiseInstance.offersModule;

        offersModule.OffersEvents.OnOffersUnavailable += OfferEventHandler.OnOffersUnavailable;
        offersModule.OffersEvents.OnOfferAvailable += OfferEventHandler.OnOfferAvailable;
        offersModule.OffersEvents.OnOfferImpressionInitialized += OfferEventHandler.OnOfferImpressionInitialized;
        offersModule.OffersEvents.OnOfferImpressionInitializationFailed += OfferEventHandler.OnOfferImpressionInitializationFailed;
        offersModule.OffersEvents.OnOfferViewed += OfferEventHandler.OnOfferViewed;
        offersModule.OffersEvents.OnOfferViewAttemptFailed += OfferEventHandler.OnOfferViewAttemptFailed;
        offersModule.OffersEvents.OnOfferAccepted += OfferEventHandler.OnOfferAccepted;
        offersModule.OffersEvents.OnOfferDismissed += OfferEventHandler.OnOfferDismissed;
    }

    private void AssignEvent()
    {
        // this.userwiseInstance.AssignEvent(new UWEvent("event_without_attrs"));

        this.userwiseInstance.AssignEvent(
            new UWEvent("tutorial_completed", new List<UWAttribute> {
                new UWAttribute("first_time", "false", UWAttributeDataType.Boolean)
            })
        );
    }

    private void AssignAttribute()
    {
        this.userwiseInstance.SetAttributes(new List<UWAttribute> {
            new UWAttribute("unity_player_level", "100", UWAttributeDataType.Integer),
            new UWAttribute("unity_player_coins", "25.50", UWAttributeDataType.Float),
            new UWAttribute("unity_player_login_date", DateTime.UtcNow.ToString("o"), UWAttributeDataType.DateTime),
            new UWAttribute("unity_player_is_whale", "true", UWAttributeDataType.Boolean),
            new UWAttribute("unity_player_name", "JenkinsDev", UWAttributeDataType.String)
        });
    }

    public void InitializeSurveyInvite(string responseId)
    {
        SurveysModule surveysModule = this.userwiseInstance.surveysModule;

        if (surveysModule.IsTakingSurvey || surveyInviteComponent.IsInviteActive())
        {
            Debug.Log("Can't initialize survey invite... Another survey is in progress.");
            return;
        }

        Debug.Log("Initializaing survey invite");
        surveysModule.InitializeSurveyInvite(responseId);
    }

    public void ForcefullyRefreshSurveys()
    {
        if (this.userwiseInstance.IsInitialized())
        {
            this.userwiseInstance.ForcePollRequest();
        }
    }
}
