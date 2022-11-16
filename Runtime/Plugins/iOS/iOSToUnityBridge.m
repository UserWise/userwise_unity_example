#import "./iOSToUnityBridge.h"

NSString* nsStringFromCString(const char *str) {
    if (str) return [NSString stringWithUTF8String:str];
    else return [NSString stringWithUTF8String:""];
}


/// MARK: UserWise Native Listeners
@implementation iOSToUnityBridge
- (void)onSurveyEnterFailedWithResponseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyEnterFailed", [responseId UTF8String]);
}

- (void)onSurveyCompletedWithResponseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyCompleted", [responseId UTF8String]);
}

- (void)onSurveyClosedWithResponseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyClosed", [responseId UTF8String]);
}
@end


/// MARK: Native Functions
///
/// The functions below are used directly, and are connected to the UserWise
/// SDK through the use of the iOSNativePlatformProxyExtensions.cs file.
void _setSurveysNativeEventListener(const char *gameObjectName) {
    iOSToUnityBridge *bridgeDelegate = [iOSToUnityBridge alloc];
    [bridgeDelegate setGameObjectName:nsStringFromCString(gameObjectName)];
    
    [SurveyController setBridgeDelegate:bridgeDelegate];
}

void _unsetSurveysNativeEventListener() {
    [SurveyController setBridgeDelegate:nil];
}

void _loadTakeSurveyPage(const char *surveyUrl, const char *responseId) {
    [SurveyController
        loadControllerWithSurveyUrl:nsStringFromCString(surveyUrl)
        responseId:nsStringFromCString(responseId)];
}


const char* _getLanguage() {
    return strdup([[UserWiseUtility getLanguage] UTF8String]);
}
    
const char* _getCountry() {
    return strdup([[UserWiseUtility getCountry] UTF8String]);
}
