#ifndef iOSToUnityBridgeProtocol_h
#define iOSToUnityBridgeProtocol_h

@protocol iOSToUnityBridgeProtocol <NSObject>

- (void)onSurveyEnterFailedWithResponseId:(NSString * _Nonnull)responseId;
- (void)onSurveyCompletedWithResponseId:(NSString * _Nonnull)responseId;
- (void)onSurveyClosedWithResponseId:(NSString * _Nonnull)responseId;

@end

#endif
