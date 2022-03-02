using UnityEngine;
using UnityEngine.UI;
using UserWiseSDK.Common.Modules;
using UserWiseSDK.Surveys;

public class SurveyInviteComponent : MonoBehaviour
{
    public Survey survey;
    public SurveysModule surveysModule;

    public Button surveyInviteAcceptButton;
    public Button surveyInviteDeclineButton;

    private bool isActive;

    private string responseId;
    private string inviteId;

    void Start()
    {
        surveyInviteAcceptButton.onClick.AddListener(AcceptSurveyInvite);
        surveyInviteDeclineButton.onClick.AddListener(DeclineSurveyInvite);

        HideInviteDialog();
    }

    public bool IsInviteActive()
    {
        return isActive;
    }

    public void ShowInviteDialog(Survey survey, string responseId, string inviteId)
    {
        if (IsInviteActive())
        {
            HideInviteDialog();
        }

        this.survey = survey;
        this.responseId = responseId;
        this.inviteId = inviteId;

        isActive = true;
        gameObject.SetActive(true);
    }

    public void HideInviteDialog()
    {
        this.responseId = null;
        this.inviteId = null;

        isActive = false;
        gameObject.SetActive(false);
    }

    void AcceptSurveyInvite()
    {
        surveysModule.SetSurveyInviteResponse(this.survey, this.responseId, this.inviteId, true);
        HideInviteDialog();
    }

    void DeclineSurveyInvite()
    {
        surveysModule.SetSurveyInviteResponse(this.survey, this.responseId, this.inviteId, false);
        HideInviteDialog();
    }
}
