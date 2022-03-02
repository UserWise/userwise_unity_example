#ifndef iOSToUnityBridge_h
#define iOSToUnityBridge_h

#import "./Utility.h"
#import "./Surveys.h"

@interface iOSToUnityBridge : NSObject
@property (strong, nonatomic) NSString *gameObjectName;

- (void)onSurveyEnterFailedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId;
- (void)onSurveyCompletedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId
- (void)onSurveyClosedWithSurvey:(Survey * _Nonnull)survey responseId:(NSString * _Nonnull)responseId
@end

#endif
