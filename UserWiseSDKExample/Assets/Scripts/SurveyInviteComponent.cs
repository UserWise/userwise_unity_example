using UnityEngine;
using UnityEngine.UI;
using UserWiseSDK;

public class SurveyInviteComponent : MonoBehaviour
{
    public Button surveyInviteAcceptButton;
    public Button surveyInviteDeclineButton;

    private bool isActive;
    private UserWise userWise;

    void Start()
    {
        userWise = UserWise.INSTANCE;

        surveyInviteAcceptButton.onClick.AddListener(AcceptSurveyInvite);
        surveyInviteDeclineButton.onClick.AddListener(DeclineSurveyInvite);

        HideInviteDialog();
    }

    public bool IsInviteActive()
    {
        return isActive;
    }

    public void ShowInviteDialog()
    {
        isActive = true;
        gameObject.SetActive(true);
    }

    public void HideInviteDialog()
    {
        isActive = false;
        gameObject.SetActive(false);
    }

    void AcceptSurveyInvite()
    {
        userWise.SetSurveyInviteResponse(true);
        HideInviteDialog();
    }

    void DeclineSurveyInvite()
    {
        userWise.SetSurveyInviteResponse(false);
        HideInviteDialog();
    }
}
