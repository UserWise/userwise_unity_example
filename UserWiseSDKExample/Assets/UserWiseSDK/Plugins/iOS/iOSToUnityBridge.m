#import "./iOSToUnityBridge.h"

@implementation iOSToUnitySurveyListener

// onSurveyAvailable and onSurveysUnavailable are handled within "native" C#
// and should not be used.
-(void)onSurveyAvailable {}
-(void)onSurveysUnavailable {}

-(void)onSurveyEntered {
    NSLog(@"Entering Survey");
    UnitySendMessage([self.gameObjectName UTF8String], "onSurveyEntered", "");
}

-(void)onSurveyClosed {
    NSLog(@"Closing Survey");
    UnitySendMessage([self.gameObjectName UTF8String], "onSurveyClosed", "");
}

-(void)onSurveyCompleted {
    NSLog(@"Completed Survey");
    UnitySendMessage([self.gameObjectName UTF8String], "onSurveyCompleted", "");
}

- (void)onSurveyEnterFailed {
    NSLog(@"Survey Enter Failed");
    UnitySendMessage([self.gameObjectName UTF8String], "onSurveyEnterFailed", "");
}

@end

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

void _setUserWiseiOSEventListener(const char *gameObjectName) {
    iOSToUnitySurveyListener *listener = [iOSToUnitySurveyListener alloc];
    [listener setGameObjectName:nsStringFromCString(gameObjectName)];
    [[UserWise sharedInstance] setSurveyDelegate:listener];
}

void _unsetUserWiseiOSEventListener() {
    [[UserWise sharedInstance] setSurveyDelegate:nil];
}

void _setColors(const char *primaryColorHex, const char *splashScreenBgColorHex) {
    UIColor *primaryColor = colorFromHexString(nsStringFromCString(primaryColorHex));
    UIColor *splashScreenBgColor = colorFromHexString(nsStringFromCString(splashScreenBgColorHex));
    
    [[UserWise sharedInstance]
      setColorsWithPrimaryColor:primaryColor
      splashScreenBackgroundColor:splashScreenBgColor];
}

void _setSplashScreenLogo(const char *logoAppPath) {
    if (!logoAppPath) return;
    UIImage *logo = [UIImage imageWithContentsOfFile:nsStringFromCString(logoAppPath)];
    [[UserWise sharedInstance] setSplashScreenLogo:logo];
}

void _loadTakeSurveyPage(const char *surveyUrl) {
    UserWise *userWise = [UserWise sharedInstance];
    
    [SurveyWebViewController
        loadControllerWithSurveyUrl:nsStringFromCString(surveyUrl)
        styleConfiguration:[userWise styleConfiguration]];
}

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
