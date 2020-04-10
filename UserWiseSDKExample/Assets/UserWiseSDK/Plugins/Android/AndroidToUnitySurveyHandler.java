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
	public void onSurveyAvailable() {}
	public void onSurveysUnavailable() {}

	public void onSurveyEntered() {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "onSurveyEntered", "");
	}

	public void onSurveyEnterFailed() {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "onSurveyEnterFailed", "");
	}

	public void onSurveyClosed() {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "onSurveyClosed", "");
	}

	public void onSurveyCompleted() {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "onSurveyCompleted", "");
	}
}