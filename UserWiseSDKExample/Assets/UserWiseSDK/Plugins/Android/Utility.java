package io.userwise.userwise_sdk;

import com.unity3d.player.UnityPlayer;

class UserWiseUtility {

    public static String getCountry() {
        return UnityPlayer.currentActivity.getResources().getConfiguration().locale.getCountry();
    }
    
    public static String getLanguage() {
        return UnityPlayer.currentActivity.getResources().getConfiguration().locale.getLanguage();
    }

    public static String getTimeZone() {
        return java.util.TimeZone.getDefault().getID();
    }
}

