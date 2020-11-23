using UnityEngine;
using UnityEngine.UI;
using UserWiseSDK;
using UserWiseSDK.Surveys;

public class SurveyInviteComponent : MonoBehaviour
{
    public Button surveyInviteAcceptButton;
    public Button surveyInviteDeclineButton;

    private bool isActive;
    private SurveysModule surveysModule;

    private string responseId;
    private string inviteId;

    void Start()
    {
        surveysModule = UserWise.INSTANCE.surveysModule;

        surveyInviteAcceptButton.onClick.AddListener(AcceptSurveyInvite);
        surveyInviteDeclineButton.onClick.AddListener(DeclineSurveyInvite);

        HideInviteDialog();
    }

    public bool IsInviteActive()
    {
        return isActive;
    }

    public void ShowInviteDialog(string responseId, string inviteId)
    {
        if (IsInviteActive())
        {
            HideInviteDialog();
        }

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
        surveysModule.SetSurveyInviteResponse(responseId, inviteId, true);
        HideInviteDialog();
    }

    void DeclineSurveyInvite()
    {
        surveysModule.SetSurveyInviteResponse(responseId, inviteId, false);
        HideInviteDialog();
    }
}
