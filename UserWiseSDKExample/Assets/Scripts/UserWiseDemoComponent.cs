using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.Text;
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

    private string DEFAULT_USER_ID = "userwise-example-unity-something";

    private UserWise userwise;
    private SurveyInviteComponent surveyInviteComponent;

    private readonly BooleanVariable myBoolVar = new BooleanVariable("my_bool_var", true);
    private readonly IntegerVariable myIntVar = new IntegerVariable("my_int_var", 100);
    private readonly FloatVariable myFloatVar = new FloatVariable("my_float_var", 1.0f);
    private readonly StringVariable myStrVar = new StringVariable("my_str_var", "the default value");
    private readonly DateTimeVariable myDatetimeVar = new DateTimeVariable("my_datetime_var", DateTime.Now.ToUniversalTime());
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
        this.userwise = UserWise.INSTANCE;

        string apiKey = "0abf3c41d9bf0d15b514870d9742";
        //string apiKey = "f0d040021dcb9f26765e25da6b57";

        this.userwise = UserWise.INSTANCE;
        this.userwise.DebugMode = true;
        this.userwise.UserId = DEFAULT_USER_ID;
        this.userwise.HostOverride = "http://192.168.1.163:3000";
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
            this.userwise.UserId = playerId;
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
        AssignEvent();
        AssignAttribute();
    }

    private void AssignEvent()
    {
        this.userwise.AssignEvent(
            new PlayerEvent("tutorial_completed", new List<PlayerAttribute> {
                new PlayerAttribute("first_time", "false", PlayerAttribute.DataTypeType.Boolean)
            })
        );
    }

    private void AssignAttribute()
    {
        this.userwise.SetAttributes(new List<PlayerAttribute> {
            new PlayerAttribute("unity_player_level", "100", PlayerAttribute.DataTypeType.Integer),
            new PlayerAttribute("unity_player_coins", "25.50", PlayerAttribute.DataTypeType.Float),
            new PlayerAttribute("unity_player_login_date", DateTime.UtcNow.ToString("o"), PlayerAttribute.DataTypeType.DateTime),
            new PlayerAttribute("unity_player_is_whale", "true", PlayerAttribute.DataTypeType.Boolean),
            new PlayerAttribute("unity_player_name", "awesome_hero_you", PlayerAttribute.DataTypeType.String)
        });
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
