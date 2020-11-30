package io.userwise.userwise_sdk;

import com.unity3d.player.UnityPlayer;
import io.userwise.userwise_sdk.UserWiseSurveyListener;

class AndroidToUnitySurveyHandler implements UserWiseSurveyListener {
    public String gameObjectName = "";

    public AndroidToUnitySurveyHandler(String gameObjectName) {
        this.gameObjectName  = gameObjectName;
    }

    // onSurveyAvailable and onSurveysUnavailable are handled within "native" C#
    // and should not be used
    public void onSurveyAvailable(String responseId) {}
    public void onSurveysUnavailable() {}
    public void onSurveyInviteInitialized(Boolean wasInitialized, String surveyResponseId, String surveyInviteId) {}

    public void onSurveyEnterFailed(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyEnterFailed", responseId);
    }

    public void onSurveyEntered(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyEntered", responseId);
    }

    public void onSurveyClosed(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyClosed", responseId);
    }

    public void onSurveyCompleted(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyCompleted", responseId);
    }
}