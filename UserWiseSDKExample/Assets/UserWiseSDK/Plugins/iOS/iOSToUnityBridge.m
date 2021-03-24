#import "./iOSToUnityBridge.h"

NSString* nsStringFromCString(const char *str) {
    if (str) return [NSString stringWithUTF8String:str];
    else return [NSString stringWithUTF8String:""];
}

UIColor* colorFromHexString(NSString *hexString) {
    unsigned rgbValue = 0;
    NSScanner *scanner = [NSScanner scannerWithString:hexString];
    [scanner setScanLocation:1]; // bypass '#' character
    [scanner scanHexInt:&rgbValue];
    return [UIColor
            colorWithRed:((rgbValue & 0xFF0000) >> 16)/255.0
            green:((rgbValue & 0xFF00) >> 8)/255.0
            blue:(rgbValue & 0xFF)/255.0
            alpha:1.0];
}



/// MARK: UserWise Native Listeners
@implementation iOSToUnitySurveyListener
-(void)onSurveyCompletedWithResponseId:(NSString *)responseId {
}
- (void)onSurveyAvailableWithSurvey:(Survey * _Nonnull)survey {}

- (void)onSurveyClosedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyClosed", "");
}

- (void)onSurveyCompletedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyCompleted", "");

}

- (void)onSurveyEnterFailedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyEnterFailed", "");
}

- (void)onSurveyEnteredWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyEntered", "");
}

- (void)onSurveyInviteInitializedWithSurvey:(Survey * _Nonnull)survey wasInitialized:(BOOL)wasInitialized responseId:(NSString * _Nullable)responseId inviteId:(NSString * _Nullable)inviteId {
}

- (void)onSurveysLoaded {

}

@end



/// MARK: Surveys Native Control
SurveysModule* getSurveysModule() {
    UserWise *userWise = [UserWise sharedInstance];
    return userWise.surveysModule;
}

void _setSurveysNativeEventListener(const char *gameObjectName) {
    iOSToUnitySurveyListener *listener = [iOSToUnitySurveyListener alloc];
    [listener setGameObjectName:nsStringFromCString(gameObjectName)];
    [getSurveysModule() setSurveyDelegate:listener];
}

void _unsetSurveysNativeEventListener() {
    [getSurveysModule() setSurveyDelegate:nil];
}

void _setColors(const char *primaryColorHex, const char *splashScreenBgColorHex) {
    UIColor *primaryColor = colorFromHexString(nsStringFromCString(primaryColorHex));
    UIColor *splashScreenBgColor = colorFromHexString(nsStringFromCString(splashScreenBgColorHex));
    
    [[UserWise sharedInstance].surveysModule
      setColorsWithPrimaryColor:primaryColor
      splashScreenBackgroundColor:splashScreenBgColor];
}

void _setSplashScreenLogo(const char *logoAppPath) {
    if (!logoAppPath) return;
    UIImage *logo = [UIImage imageWithContentsOfFile:nsStringFromCString(logoAppPath)];
    [[UserWise sharedInstance].surveysModule setSplashScreenLogo:logo];
}

void _loadTakeSurveyPage(const char *surveyUrl, const char *responseId) {
    UserWise *userWise = [UserWise sharedInstance];

    [SurveyWebViewController
        loadControllerWithSurvey:[Survey alloc]
        surveyUrl:nsStringFromCString(surveyUrl)
        splashScreenStyles:[userWise.surveysModule styleConfiguration]
        responseId:nsStringFromCString(responseId)];
}



/// MARK: Utility Native Functions
const char* _getCarrier() {
    return [[UserWiseUtility getPhoneCarrier] UTF8String];
}

const char* _getOsVersion() {
    return [[UserWiseUtility getOsVersion] UTF8String];
}

const char* _getDeviceType() {
    return [[UserWiseUtility getDeviceType] UTF8String];
}

const char* _getConnectionType() {
    return [[UserWiseUtility getConnectionType] UTF8String];
}

const char* _getLanguage() {
    return [[UserWiseUtility getLanguage] UTF8String];
}

const char* _getCountry() {
    return [[UserWiseUtility getCountry] UTF8String];
}
