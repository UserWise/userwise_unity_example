package io.userwise.userwise_sdk;

import com.unity3d.player.UnityPlayer;

class AndroidToUnityBridge {
    public String gameObjectName = "";

    public AndroidToUnityBridge(String gameObjectName) {
        this.gameObjectName = gameObjectName;
    }

    public void onSurveyEnterFailed(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyEnterFailed", responseId);
    }
    
    public void onSurveyCompleted(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyCompleted", responseId);
    }
    
    public void onSurveyClosed(String responseId) {
        UnityPlayer.UnitySendMessage(this.gameObjectName, "OnSurveyClosed", responseId);
    }
}


