using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UserWiseSDK;
using UserWiseSDK.Surveys;
using UserWiseSDK.Offers;
using UserWiseSDK.Messages;
using UserWiseSDK.Variables;
using UserWiseSDK.Events;
using UserWiseSDK.Variables.Types;

public class UserWiseDemoComponent : MonoBehaviour
{
    public GameObject surveyInviteDialog;
    public InputField playerIdInput;
    public Button changePlayerButton;

    private string DEFAULT_USER_ID = "userwise-example-unity";

    private UserWise userwise;
    private SurveyInviteComponent surveyInviteComponent;

    private readonly BooleanVariable myBoolVar = new BooleanVariable("my_bool_var", true);
    private readonly IntegerVariable myIntVar = new IntegerVariable("my_int_var", 100);
    private readonly FloatVariable myFloatVar = new FloatVariable("my_float_var", 1.0f);
    private readonly StringVariable myStrVar = new StringVariable("my_str_var", "the default value");
    private readonly DateTimeVariable myDatetimeVar = new DateTimeVariable("my_datetime_var", DateTime.UtcNow);
    private readonly FileVariable myFileVar = new FileVariable("my_file_var", null);

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
        string apiKey = "";

        this.userwise = UserWise.INSTANCE;
        this.userwise.DebugMode = true;
        this.userwise.UserId = DEFAULT_USER_ID.Trim();
        //this.userwise.HostOverride = "http://lvh.me:3000";
        this.userwise.SetApiKey(apiKey);

        this.userwise.OnSessionInitialized += Userwise_OnSessionInitialized;

        // Variables Configuration (Definitions)
        VariablesModule variablesModule = this.userwise.VariablesModule;
        variablesModule.Define(this.myBoolVar);
        variablesModule.Define(this.myIntVar);
        variablesModule.Define(this.myFloatVar);
        variablesModule.Define(this.myDatetimeVar);
        variablesModule.Define(this.myFileVar);
        variablesModule.Define(this.myStrVar);
        variablesModule.OnVariablesLoaded += VariablesModule_OnVariablesLoaded;

        // Game Event Configuration
        EventsModule eventsModule = this.userwise.EventsModule;
        eventsModule.OnEventsLoaded += GameEventHandler.OnEventsLoaded;
        eventsModule.OnEventActive += GameEventHandler.OnEventActive;

        // Messages Configuration
        MessagesModule messagesModule = this.userwise.MessagesModule;
        messagesModule.OnMessageAvailable += MessageEventHandler.OnMessageAvailable;
        messagesModule.OnMessagesLoaded += MessageEventHandler.OnMessagesLoaded;

        // Offers Module Configuration
        OffersModule offersModule = this.userwise.OffersModule;
        offersModule.OnOffersLoaded += OfferEventHandler.OnOffersLoaded;
        offersModule.OnOfferAvailable += OfferEventHandler.OnOfferAvailable;
        offersModule.OnOfferImpressionInitializationFailed += OfferEventHandler.OnOfferImpressionInitializationFailed;
        offersModule.OnOfferImpressionInitialized += OfferEventHandler.OnOfferImpressionInitialized;

        // Surveys Module Configuration
        SurveysModule surveysModule = this.userwise.SurveysModule;
        surveysModule.OnSurveysLoaded += SurveyEventHandler.OnSurveysLoaded;
        surveysModule.OnSurveyAvailable += SurveyEventHandler.OnSurveyAvailable;
        surveysModule.OnSurveyInviteInitialized += SurveyEventHandler.OnSurveyInviteInitialized;
        surveysModule.OnSurveyEntered += SurveyEventHandler.OnSurveyEntered;
        surveysModule.OnSurveyEnterFailed += SurveyEventHandler.OnSurveyEnterFailed;
        surveysModule.OnSurveyClosed += SurveyEventHandler.OnSurveyClosed;
        surveysModule.OnSurveyCompleted += SurveyEventHandler.OnSurveyCompleted;
        // The splash screen can be configured by setting a primary and background
        // color, as well as the logo that displays (defaults to the UserWise logo).

        // Update Splash Screen Colors
        //surveysModule.SetColors("#FFFFFF", "#361688");

        // Update Splash Screen Logo
        //string logoName = "userwise_hero_wars_logo.png";
        //string logoPath = Path.Combine(Application.streamingAssetsPath, logoName);
        //#if UNITY_ANDROID
        //    UnityWebRequest www = UnityWebRequest.Get(logoPath);
        //    UnityWebRequestAsyncOperation asyncOp = www.SendWebRequest();
        //    asyncOp.completed += (_) =>
        //    {
        //        string androidLogoPath = Path.Combine(Application.persistentDataPath, logoName);
        //        File.WriteAllBytes(androidLogoPath, www.downloadHandler.data);
        //        surveysModule.SetSplashScreenLogo(androidLogoPath);
        //    };
        //#else
        //    surveysModule.SetSplashScreenLogo(logoPath);
        //#endif
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
    }

    private void VariablesModule_OnVariablesLoaded(object sender, OnVariablesLoadedEventArgs e)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine(String.Format("UserWise variables have been loaded! Was from cache? {0}", e.FromCache));
        stringBuilder.AppendLine(String.Format("| myBoolVar = {0}", this.myBoolVar.CurrentValue));
        stringBuilder.AppendLine(String.Format("| myIntVar = {0}", this.myIntVar.CurrentValue));
        stringBuilder.AppendLine(String.Format("| myFloatVar = {0}", this.myFloatVar.CurrentValue));
        stringBuilder.AppendLine(String.Format("| myStrVar = {0}", this.myStrVar.CurrentValue));
        stringBuilder.AppendLine(String.Format("| myDatetimeVar = {0}", this.myDatetimeVar.CurrentValue));
        stringBuilder.AppendLine(String.Format("| myFileVar = {0}", this.myFileVar.CurrentValue));

        // we can also load file data, which is just a shortcut for the
        // media methods available on UserWise.INSTANCE.
        if (this.myFileVar.CurrentValue != null)
        {
            this.myFileVar.GetRawFileData((successful, bytes) =>
                    {
                        string numBytesStr = (successful) ? bytes.Length.ToString() : "unknown";
                        stringBuilder.AppendLine(String.Format("|  - {0} Bytes", numBytesStr));
                        Debug.Log(stringBuilder.ToString());
                    });
        }
        else
        {
            Debug.Log(stringBuilder.ToString());
        }
    }

    private void Userwise_OnSessionInitialized(object sender, OnSessionInitializedEventArgs e)
    {
        StartCoroutine(AssignLoginData());
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
            new PlayerEvent("event_logged_in", new List<PlayerEventAttribute> {
                new PlayerEventAttribute("new_player", false, AttributableDataType.BOOLEAN),
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
        surveyInviteComponent.surveysModule = this.userwise.SurveysModule;

        if (surveysModule.IsTakingSurvey() || surveyInviteComponent.IsInviteActive())
        {
            Debug.Log("Can't initialize survey invite... Another survey is in progress.");
            return;
        }

        surveysModule.InitializeSurveyInvite(survey);
    }
}
