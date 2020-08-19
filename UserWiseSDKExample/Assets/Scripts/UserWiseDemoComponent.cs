using UnityEngine;
using UnityEngine.UI;
using UserWiseSDK;
using UserWiseSDK.API.Structs;
using System.Text;
using System.IO;
using System.Collections.Generic;
using System;

public class UserWiseDemoComponent : MonoBehaviour
{
    public GameObject surveyInviteDialog;
    public Button forcefullyRefreshSurveysButton;

    private UserWise userwiseInstance;
    private SurveyInviteComponent surveyInviteComponent;

    void Start()
    {
        surveyInviteComponent = surveyInviteDialog.GetComponent<SurveyInviteComponent>();
        this.forcefullyRefreshSurveysButton.onClick.AddListener(ForcefullyRefreshSurveys);

        InitializeUserWiseSDK();
        this.userwiseInstance.OnStart();

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

        this.userwiseInstance.surveyEvents.SurveyAvailable += SurveyEventHandler.OnSurveyAvailable;
        this.userwiseInstance.surveyEvents.SurveysUnavailable += SurveyEventHandler.OnSurveysUnavailable;
        this.userwiseInstance.surveyEvents.SurveyEntered += SurveyEventHandler.OnSurveyEntered;
        this.userwiseInstance.surveyEvents.SurveyEnterFailed += SurveyEventHandler.OnSurveyEnterFailed;
        this.userwiseInstance.surveyEvents.SurveyClosed += SurveyEventHandler.OnSurveyClosed;
        this.userwiseInstance.surveyEvents.SurveyCompleted += SurveyEventHandler.OnSurveyCompleted;

        AssignEvent();
        AssignAttribute();
    }

    void InitializeUserWiseSDK()
    {
        this.userwiseInstance = UserWise.INSTANCE;

        string apiKey = "f0d040021dcb9f26765e25da6b57";
        byte[] apiKeyBytes = Encoding.UTF8.GetBytes(apiKey);
        string b64EncodedApiKey = Convert.ToBase64String(apiKeyBytes);

        this.userwiseInstance = UserWise.INSTANCE;
        this.userwiseInstance.debugMode = true;
        this.userwiseInstance.apiKey = b64EncodedApiKey;
        this.userwiseInstance.userId = "userwise-unity-example-user";
    }

    void AssignEvent()
    {
        // this.userwiseInstance.AssignEvent(new UWEvent("event_without_attrs"));

        this.userwiseInstance.AssignEvent(
            new UWEvent("tutorial_completed", new List<UWAttribute> {
                new UWAttribute("first_time", "false", UWAttributeDataType.Boolean)
            })
        );
    }

    void AssignAttribute()
    {
        this.userwiseInstance.SetAttributes(new List<UWAttribute> {
            new UWAttribute("unity_player_level", "100", UWAttributeDataType.Integer),
            new UWAttribute("unity_player_coins", "25.50", UWAttributeDataType.Float),
            new UWAttribute("unity_player_login_date", DateTime.UtcNow.ToString("o"), UWAttributeDataType.DateTime),
            new UWAttribute("unity_player_is_whale", "true", UWAttributeDataType.Boolean),
            new UWAttribute("unity_player_name", "JenkinsDev", UWAttributeDataType.String)
        });
    }

    public void InitializeSurveyInvite()
    {
        if (!this.userwiseInstance.isTakingSurvey && !surveyInviteComponent.IsInviteActive())
        {
            Debug.Log("Initializaing survey invite");

            this.userwiseInstance.InitializeSurveyInvite((bool successfulInit) =>
            {
                if (successfulInit)
                {
                    surveyInviteComponent.ShowInviteDialog();
                }
                else
                {
                    Debug.LogWarning("Survey invite failed to initialize!");
                }
            });
        }
    }

    public void ForcefullyRefreshSurveys()
    {
        if (this.userwiseInstance.IsInitialized())
        {
            this.userwiseInstance.RefreshHasAvailableSurveys();
        }
    }
}
