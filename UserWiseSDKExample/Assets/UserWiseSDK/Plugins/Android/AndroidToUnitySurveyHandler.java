package io.userwise.userwise_sdk.surveys;

import com.unity3d.player.UnityPlayer;
import io.userwise.userwise_sdk.surveys.Survey;
import io.userwise.userwise_sdk.surveys.SurveyEventListener;

class AndroidToUnitySurveyHandler implements SurveyEventListener {
    public String gameObjectName = "";

    public AndroidToUnitySurveyHandler(String gameObjectName) {
        this.gameObjectName = gameObjectName;
    }

    // onSurveyAvailable and onSurveysUnavailable are handled within "native" C#
    // and should not be used
    public void onSurveysLoaded(boolean fromCache) {}
    public void onSurveyAvailable(Survey survey) {}
    public void onSurveyInviteInitialized(Boolean wasInitialized, Survey survey, String surveyResponseId, String surveyInviteId) {}

    public void onSurveyEnterFailed(Survey survey, String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyEnterFailed", responseId);
    }

    public void onSurveyEntered(Survey survey, String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyEntered", responseId);
    }

    public void onSurveyClosed(Survey survey, String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyClosed", responseId);
    }

    public void onSurveyCompleted(Survey survey, String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyCompleted", responseId);
    }
}