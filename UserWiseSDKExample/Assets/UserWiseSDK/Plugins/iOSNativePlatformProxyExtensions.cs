using UnityEngine;
using System;
using System.Runtime.InteropServices;

namespace UserWiseSDK.Platforms
{
    static class iOSNativePlatformProxyExtensions
    {
#if UNITY_IOS
        [DllImport("__Internal")]
        private static extern void _setUserWiseiOSEventListener(string gameObjName);

        [DllImport("__Internal")]
        private static extern void _unsetUserWiseiOSEventListener();

        [DllImport("__Internal")]
        private static extern void _loadTakeSurveyPage(string surveyUrl);

        [DllImport("__Internal")]
        private static extern void _setColors(string primaryColorHex, string splashScreenBackgroundColorHex);

        [DllImport("__Internal")]
        private static extern void _setSplashScreenLogo(string logoPath);

        [DllImport("__Internal")]
        private static extern IntPtr _getCarrier();

        [DllImport("__Internal")]
        private static extern IntPtr _getOsVersion();

        [DllImport("__Internal")]
        private static extern IntPtr _getDeviceType();

        [DllImport("__Internal")]
        private static extern IntPtr _getConnectionType();

        [DllImport("__Internal")]
        private static extern IntPtr _getLanguage();

        [DllImport("__Internal")]
        private static extern IntPtr _getCountry();

        [RuntimeInitializeOnLoadMethod]
        static void SetNativeiOSFunctions()
        {
            Logger.Log("Setting Native iOS Functions");
            iOSNativePlatformProxy proxy = (iOSNativePlatformProxy)NativePlatformProxyFactory.GetNativePlatformProxy();
            proxy.loadTakeSurveyPageNativeFunction += _loadTakeSurveyPage;
            proxy.setEventListenerNativeFunction += _setUserWiseiOSEventListener;
            proxy.unsetEventListenerNativeFunction += _unsetUserWiseiOSEventListener;
            proxy.setColorsNativeFunction += _setColors;
            proxy.setSplashScreenLogoNativeFunction += _setSplashScreenLogo;
            proxy.getCarrierNativeFunction += _getCarrier;
            proxy.getOsVersionNativeFunction += _getOsVersion;
            proxy.getDeviceTypeNativeFunction += _getDeviceType;
            proxy.getConnectionTypeNativeFunction += _getConnectionType;
            proxy.getLanguageNativeFunction += _getLanguage;
            proxy.getCountryNativeFunction += _getCountry;
        }
#endif
    }
}