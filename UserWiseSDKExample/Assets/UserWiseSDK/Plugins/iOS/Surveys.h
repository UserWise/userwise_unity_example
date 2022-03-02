#ifndef UserWiseSurveys_h
#define UserWiseSurveys_h

#import "Foundation"
#import "WebKit"
#import "UIKit"
#import "./iOSToUnityBridge.h"

@interface FullScreenWKWebView : NSObject, WKWebView, WKNavigationDelegate, WKScriptMessageHandler
@property (strong, nonatomic) SurveyController *surveyUrl;

- (void)initWithSurveyController:(SurveyController *)surveyController;
- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message;
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation;
- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error;
@end

@interface SurveyController : UIViewController
@property (strong, nonatomic) iOSToUnityBridge *bridgeDelegate;
@property (string, nonatomic) FullScreenWKWebView *initWithSurveyController
@property (strong, nonatomic) NSString *surveyUrl;
@property (strong, nonatomic) NSString *responseId;

+ (void)loadControllerWithSurveyUrl:(NSString *)surveyUrl responseId:(NSString *)responseId;
- (void)viewDidLoad;
- (void)closeView;
- (void)setWebView;
- (void)reconstrainWebView;
- (void)onSurveyLoadFailed;
- (void)onSurveyClosed;
- (void)onSurveyCompleted;
@end

#endif
