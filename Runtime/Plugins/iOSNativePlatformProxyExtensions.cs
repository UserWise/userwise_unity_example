using UnityEngine;
using System;
using System.Runtime.InteropServices;

namespace UserWiseSDK.Internal.Platforms
{

    /// <summary>
    /// Connects the Objective-C functions defined within <c>iOS/iOSToUnityBridge</c>
    /// to the <see cref="iOSNativePlatformProxy"/>, as part of the <c>UserWiseSDK.Internal.Platforms</c>
    /// namespace.
    /// 
    /// This code SHOULD NOT be altered, or removed.
    /// </summary>
    static class iOSNativePlatformProxyExtensions
    {
#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern void _setSurveysNativeEventListener(string gameObjName);
        [DllImport("__Internal")]
        private static extern void _unsetSurveysNativeEventListener();

        [DllImport("__Internal")]
        private static extern void _loadTakeSurveyPage(string surveyUrl, string responseId);

        [DllImport("__Internal")]
        private static extern string _getLanguage();
        [DllImport("__Internal")]
        private static extern string _getCountry();
        [DllImport("__Internal")]
        private static extern string _getTimeZone();

        [RuntimeInitializeOnLoadMethod]
        static void SetNativeiOSFunctions()
        {
            iOSNativePlatformProxy proxy = (iOSNativePlatformProxy)NativePlatformProxyFactory.GetNativePlatformProxy();
            proxy.setEventListenerNativeFunction += _setSurveysNativeEventListener;
            proxy.unsetEventListenerNativeFunction += _unsetSurveysNativeEventListener;

            proxy.loadTakeSurveyPageNativeFunction += _loadTakeSurveyPage;

            proxy.getLanguageNativeFunction += _getLanguage;
            proxy.getCountryNativeFunction += _getCountry;
        }
#endif
    }
}
