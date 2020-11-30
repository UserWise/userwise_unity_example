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
// onSurveyAvailable and onSurveysUnavailable are handled within "native" C#
// and should not be used.
- (void)onSurveyAvailableWithResponseId:(NSString * _Nonnull)responseId {}


- (void)onSurveyInviteInitializedWithWasInitialized:(BOOL)wasInitialized
                                         responseId:(NSString * _Nullable)responseId
                                           inviteId:(NSString * _Nullable)inviteId {}
-(void)onSurveysUnavailable {}

-(void)onSurveyEnteredWithResponseId:(NSString *)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyEntered", "");
}

-(void)onSurveyClosedWithResponseId:(NSString *)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyClosed", "");
}

-(void)onSurveyCompletedWithResponseId:(NSString *)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyCompleted", "");
}

- (void)onSurveyEnterFailedWithResponseId:(NSString *)responseId {
    UnitySendMessage([self.gameObjectName UTF8String], "OnSurveyEnterFailed", "");
}
@end

NSString * const OfferViewAttemptFailedReason_ToString[] = {
    [OfferViewAttemptFailedReasonServerError] = @"server",
    [OfferViewAttemptFailedReasonOfferAlreadyActive] = @"already_active"
};

@implementation iOSToUnityOfferListener
- (void)onOfferAvailableWithOfferId:(NSString *)offerId {}

- (void)onOfferImpressionInitializationFailedWithOfferId:(NSString *)offerId {}

- (void)onOfferImpressionInitialized:(OfferImpression *)offerImpression {}

- (void)onOfferUnavailable {}

- (void)onOfferAcceptedWithOfferImpression:(OfferImpression *)offerImpression {
    UnitySendMessage([self.gameObjectName UTF8String], "OnOfferAccepted", "");
}

- (void)onOfferDismissedWithOfferImpression:(OfferImpression *)offerImpression {
    UnitySendMessage([self.gameObjectName UTF8String], "OnOfferDismissed", "");
}

- (void)onOfferViewAttemptFailedWithOfferImpression:(OfferImpression *)offerImpression
                                             reason:(enum OfferViewAttemptFailedReason)reason {
    UnitySendMessage([self.gameObjectName UTF8String],
                     "OnOfferViewAttemptFailed",
                     [OfferViewAttemptFailedReason_ToString[reason] UTF8String]);
}

- (void)onOfferViewedWithOfferImpression:(OfferImpression *)offerImpression {
    UnitySendMessage([self.gameObjectName UTF8String], "OnOfferViewed", "");
}
@end




/// MARK: Surveys Native Control
SurveysModule* getSurveysModule() {
    UserWise *userWise = [UserWise sharedInstance];
    if (userWise.surveysModule == nil) {
        userWise.surveysModule = [SurveysModule alloc];
    }
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
        loadControllerWithSurveyUrl:nsStringFromCString(surveyUrl)
        splashScreenStyles:[userWise.surveysModule styleConfiguration]
        responseId:nsStringFromCString(responseId)];
}




/// MARK: Offers Native Control
OfferPopupController *activeController;
OffersModule *getOffersModule() {
    UserWise *userWise = [UserWise sharedInstance];
    if (userWise.offersModule == nil) {
        userWise.offersModule = [OffersModule alloc];
    }
    return userWise.offersModule;
}

void _setOffersNativeEventListener(const char *gameObjectName) {
    iOSToUnityOfferListener *listener = [iOSToUnityOfferListener alloc];
    [listener setGameObjectName:nsStringFromCString(gameObjectName)];
    [getOffersModule() setOfferDelegate:listener];
}

void _unsetOffersNativeEventListener() {
    [getOffersModule() setOfferDelegate:nil];
}

void _loadShowOfferView(const char *offerUrl) {
    if (![OfferPopupManager isAnOfferDisplayed]) { return; }
    
    [OfferPopupManager showOfferWithImpression:nil offerUrl:nsStringFromCString(offerUrl)];
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
