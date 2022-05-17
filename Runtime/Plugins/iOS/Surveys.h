#ifndef UserWiseSurveys_h
#define UserWiseSurveys_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "./iOSToUnityBridgeProtocol.h"

static id <iOSToUnityBridgeProtocol>staticBridgeDelegate = nil;

@interface SurveyController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler>
@property (strong, nonatomic) WKWebView *webView;
@property (strong, nonatomic) NSString *surveyUrl;
@property (strong, nonatomic) NSString *responseId;

+ (id <iOSToUnityBridgeProtocol>)bridgeDelegate;
+ (void)setBridgeDelegate:(id <iOSToUnityBridgeProtocol>)bridgeDelegate;
+ (void)loadControllerWithSurveyUrl:(NSString *)surveyUrl responseId:(NSString *)responseId;
- (void)viewDidLoad;
- (void)closeView;
- (void)setWebView;
- (void)reconstrainWebView;
- (void)onSurveyLoadFailed;
- (void)onSurveyCompleted;
- (void)onSurveyClosed;
- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message;
- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error;
@end

#endif
