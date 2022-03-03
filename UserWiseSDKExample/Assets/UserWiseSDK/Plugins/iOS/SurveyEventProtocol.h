#ifndef SurveyEventProtocol_h
#define SurveyEventProtocol_h

@protocol SurveyEventProtocol <NSObject>

- (void)onSurveyLoadFailed;
- (void)onSurveyClosed;
- (void)onSurveyCompleted;

@end

#endif
