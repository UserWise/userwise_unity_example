#import "./Surveys.h"

@implementation FullScreenWKWebView : NSObject, WKWebView, WKNavigationDelegate, WKScriptMessageHandler
- (void)initWithSurveyController:(SurveyController *)surveyController {
    WKPreferences *wkPreferences = [WKPreferences alloc];
    [wkPreferences setJavaScriptEnabled:YES];
    
    WKUserContentController *wkContentController = [WKUserContentController alloc];
    [wkContentController addScriptMessageHandler:self name:@"userWiseHandler"];
    
    WKWebViewConfiguration *wkWebConfig = [WKWebViewConfiguration alloc];
    [wkWebConfig setPreferences:wkPreferences];
    [wkWebConfig setUserContentController:wkContentController];
    
    CGRect frame = CGRectMake(0, 0, 0, 0);
    [super initWithFrame:frame configuration:wkWebConfig];
    
    [self setIsUserInteractionEnabled:YES];
    [[self scrollView] setBounces:YES];
    [self setSurveyController:surveyController];
    [self setNavigationDelegate:self];
}

- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
    NSString *body = (NSString)[message body];
    
    if (body.isEqualToString(@"survey_force_closed")) {
        [[self surveyController] onSurveyClosed];
    } else if (body.isEqualToString(@"survey_completed")) {
        [[self surveyController] onSurveyCompleted];
    }
}

- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error {
    [[self surveyController] onSurveyLoadFailed];
}
@end

@implementation SurveyController
+ (void)loadControllerWithSurveyUrl:(NSString *)surveyUrl responseId:(NSString *)responseId {
    dispatch_async(dispatch_get_main_queue(), ^{
        SurveyController *surveyController = [SurveyController alloc];
        [surveyController setSurveyUrl:surveyUrl];
        [surveyController setResponseId:responseId];
        [surveyController setModalPresentationStyle:UIModalPresentationFullScreen];
        
        UIViewController *rootCtrl = [UIApplication sharedApplication].keyWindow.rootViewController;
        while (rootCtrl.presentedViewController) {
            rootCtrl = rootCtrl.presentedViewController;
        }
        
        [rootCtrl presentViewController:surveyController animated:YES completion:nil];
    });
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setHidesBottomBarWhenPushed:YES];
    [self setModalPresentationCapturesStatusBarAppearance:YES];
    
    [self setWebView];
    
    NSUrl *url = [NSUrl initWithString:[self surveyUrl]];
    if (url != nil) {
        NSURLRequest *req = [NSURLRequest initWithURL:url];
        [[self webView] loadRequest:req];
    }
}

- (void)closeView {
    [self dismissWithAnimated:YES completion:nil];
}

- (void)setWebView {
    FullScreenWKWebView *webView = [[FullScreenWKWebView alloc] initWithSurveyController:self];
    
    [self setWebView:webView];
    [[self view] addSubView:webView];
    
    [self reconstrainWebView];
}

- (void)reconstrainWebView {
    UILayoutGuide *layoutMarginsGuide = [[self view] layoutMarginsGuide];
    
    [NSLayoutConstraint activateConstraints:@[
        [[[self webView] centerXAnchor] constraintEqualToAnchor: [[self view] centerXAnchors]],
        [[[self webView] centerYAnchors] constraintEqualToAnchor: [[self view] centerYAnchors]],
        [[[self webView] bottomAnchor] constraintEqualToAnchor: [[self view] bottomAnchor]],
        [[[self webView] leadingAnchor] constraintEqualToAnchor: [[self view] leadingAnchor]],
        [[[self webView] trailingAnchor] constraintEqualToAnchor: [[self view] trailingAnchor]],
        [[[self webView] topAnchor] constraintEqualToAnchor: [layoutMarginsGuide topAnchor]]
    ]];
    
    [[self webView] setTranslatesAutoresizingMaskIntoConstraintes:NO];
}

- (void)onSurveyLoadFailed {
    iOSToUnityBridge *bridgeDelegate = [self bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyEnterFailedWithResponseId:[self responseId]];
    }
}

- (void)onSurveyCompleted {
    iOSToUnityBridge *bridgeDelegate = [self bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyCompletedWithResponseId:[self responseId]];
    }
}

- (void)onSurveyClosed {
    iOSToUnityBridge *bridgeDelegate = [self bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyClosedWithResponseId:[self responseId]];
    }
}
@end