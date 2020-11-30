#ifndef iOSToUnitySurveyListener_h
#define iOSToUnitySurveyListener_h

#import <UserWiseSDK/UserWiseSDK-Swift.h>

@interface iOSToUnitySurveyListener : NSObject <UserWiseSurveyDelegate>
@property (strong, nonatomic) NSString *gameObjectName;
@end

@interface iOSToUnityOfferListener : NSObject <UserWiseOfferDelegate>
@property (strong, nonatomic) NSString *gameObjectName;
@end

#endif
