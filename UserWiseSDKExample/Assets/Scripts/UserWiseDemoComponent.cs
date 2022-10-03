using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UserWiseSDK;
using UserWiseSDK.Events;
using UserWiseSDK.Messages;
using UserWiseSDK.Offers;
using UserWiseSDK.PushNotifications;
using UserWiseSDK.RemoteConfigs;
using UserWiseSDK.Surveys;

public class UserWiseDemoComponent : MonoBehaviour
{
    public GameObject surveyInviteDialog;
    public InputField playerIdInput;
    public Button changePlayerButton;
    public Button refreshContentButton;

    private string DEFAULT_USER_ID = "userwise-example-unity";

    private UserWise userwise;
    private SurveyInviteComponent surveyInviteComponent;

    void Start()
    {
        SetupScene();

        if (!UserWise.INSTANCE.IsSessionInitialized())
        {
            ConfigureUserWiseSDK();
        }

        userwise.Start();
    }

    private void ConfigureUserWiseSDK()
    {
        this.userwise = UserWise.INSTANCE;
        this.userwise.UserId = DEFAULT_USER_ID.Trim();
        this.userwise.EnvironmentStage = EnvironmentStage.live; // EnvironmentStage.qa;
        //this.userwise.SetApiKey("b8aae6ed515c973f728850adef7c");

        this.userwise.OnSessionInitialized += Userwise_OnSessionInitialized;

        // Game Event Configuration
        EventsModule eventsModule = this.userwise.EventsModule;
        eventsModule.OnLoaded += GameEventHandler.OnLoaded;
        eventsModule.OnActive += GameEventHandler.OnActive;
        eventsModule.OnInactive += GameEventHandler.OnInactive;

        // Messages Configuration
        MessagesModule messagesModule = this.userwise.MessagesModule;
        messagesModule.OnLoaded += MessageEventHandler.OnLoaded;
        messagesModule.OnActive += MessageEventHandler.OnActive;
        messagesModule.OnInactive += MessageEventHandler.OnInactive;
        messagesModule.OnMessageInitialized += MessageEventHandler.OnMessageInitialized;
        messagesModule.OnMessageInitializationFailed += MessageEventHandler.OnMessageInitializationFailed;

        // Offers Module Configuration
        OffersModule offersModule = this.userwise.OffersModule;
        offersModule.OnLoaded += OfferEventHandler.OnLoaded;
        offersModule.OnActive += OfferEventHandler.OnActive;
        offersModule.OnInactive += OfferEventHandler.OnInactive;
        offersModule.OnOfferImpressionInitializationFailed += OfferEventHandler.OnOfferImpressionInitializationFailed;
        offersModule.OnOfferImpressionInitialized += OfferEventHandler.OnOfferImpressionInitialized;

        // RemoteConfigs Module Configuration
        RemoteConfigsModule remoteConfigsModule = this.userwise.RemoteConfigsModule;
        remoteConfigsModule.OnLoaded += RemoteConfigEventHandler.OnLoaded;
        remoteConfigsModule.OnActive += RemoteConfigEventHandler.OnActive;
        remoteConfigsModule.OnInactive += RemoteConfigEventHandler.OnInactive;

        // Surveys Module Configuration
        SurveysModule surveysModule = this.userwise.SurveysModule;
        surveysModule.OnLoaded += SurveyEventHandler.OnLoaded;
        surveysModule.OnActive += SurveyEventHandler.OnActive;
        surveysModule.OnInactive += SurveyEventHandler.OnInactive;
        surveysModule.OnSurveyInviteInitialized += SurveyEventHandler.OnSurveyInviteInitialized;
        surveysModule.OnSurveyEntered += SurveyEventHandler.OnSurveyEntered;
        surveysModule.OnSurveyEnterFailed += SurveyEventHandler.OnSurveyEnterFailed;
        surveysModule.OnSurveyClosed += SurveyEventHandler.OnSurveyClosed;
        surveysModule.OnSurveyCompleted += SurveyEventHandler.OnSurveyCompleted;
    }

    private void SetupScene()
    { 
        surveyInviteComponent = surveyInviteDialog.GetComponent<SurveyInviteComponent>();

        GameObject playerIdFieldObject = GameObject.Find("player_id_input");
        playerIdInput = playerIdFieldObject.GetComponent<InputField>();
        playerIdInput.text = DEFAULT_USER_ID;

        GameObject changePlayerButtonObject = GameObject.Find("change_player_button");
        changePlayerButton = changePlayerButtonObject.GetComponent<Button>();
        changePlayerButton.onClick.AddListener(() =>
        {
            string playerId = playerIdInput.text;
            this.userwise.Stop();
            this.userwise.UserId = playerId.Trim();
            this.userwise.Start();
        });

        GameObject refreshContentButtonObject = GameObject.Find("refresh_content_button");
        refreshContentButton.onClick.AddListener(() =>
        {
            this.userwise.RefreshContent();
        });
    }

    private void Userwise_OnSessionInitialized(object sender, OnSessionInitializedEventArgs e)
    {
        StartCoroutine(AssignLoginData());

        // Push Notifications Module Configuration
        //
        // Generally, Firebase should be initialized after UserWise so that device token registration
        // acts uninhibited.
        PushNotificationsIntegration.Configure(this);
    }

    private IEnumerator AssignLoginData()
    {
        yield return new WaitForSeconds(5);
        AssignEvent();
        AssignAttribute();
        TransitionToRegion();
    }

    private void AssignEvent()
    {
        Debug.Log("Assigning Events");
        this.userwise.AssignEvent(
            new PlayerEvent("event_logged_in", new List<PlayerAttribute> {
                new PlayerAttribute("new_player", false, AttributableDataType.BOOLEAN),
            }),
            null
        );
    }

    private void AssignAttribute()
    {
        Debug.Log("Assigning Attributes");
        this.userwise.SetAttributes(new List<PlayerAttribute> {
            new PlayerAttribute("coins", 1000, AttributableDataType.INTEGER),
            new PlayerAttribute("ltv", 125.50, AttributableDataType.FLOAT),
            new PlayerAttribute("login_datetime", DateTime.UtcNow.ToString("o"), AttributableDataType.DATETIME),
            new PlayerAttribute("season_spring_2021_passholder", true, AttributableDataType.BOOLEAN),
            new PlayerAttribute("guild_name", "My Guild", AttributableDataType.STRING)
        }, null);
    }

    private void TransitionToRegion()
    {
        Debug.Log("Transitioning To Region");
        this.userwise.TransitionToRegion(
            new Region("team_battle", new List<RegionMetadata> {
                new RegionMetadata("team_one_power", 115, AttributableDataType.INTEGER),
                new RegionMetadata("team_two_power", 258, AttributableDataType.INTEGER)
            }),
            null
        );
    }

    public void InitializeSurveyInvite(Survey survey)
    {
        SurveysModule surveysModule = this.userwise.SurveysModule;

        surveyInviteComponent.surveysModule = surveysModule;
        surveysModule.InitializeSurveyInvite(survey);
    }
}
