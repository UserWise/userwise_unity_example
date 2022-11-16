#import "./Surveys.h"

@implementation SurveyController
+ (id <iOSToUnityBridgeProtocol>)bridgeDelegate {
    return staticBridgeDelegate;
}

+ (void)setBridgeDelegate:(id<iOSToUnityBridgeProtocol>)bridgeDelegate {
    staticBridgeDelegate = bridgeDelegate;
}

+ (void)loadControllerWithSurveyUrl:(NSString *)surveyUrl responseId:(NSString *)responseId {
    dispatch_async(dispatch_get_main_queue(), ^{
        SurveyController *surveyController = [[SurveyController alloc] init];
        [surveyController setSurveyUrl:surveyUrl];
        [surveyController setResponseId:responseId];
        [surveyController setModalPresentationStyle:UIModalPresentationFullScreen];
        
        UIViewController *rootCtrl = [UIApplication sharedApplication].keyWindow.rootViewController;
        
        [rootCtrl presentViewController:surveyController animated:YES completion:nil];
    });
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setHidesBottomBarWhenPushed:YES];
    [self setModalPresentationCapturesStatusBarAppearance:YES];

    [self setWebView];
    
    NSURL *url = [NSURL URLWithString:[self surveyUrl]];
    if (url != nil) {
        NSURLRequest *req = [NSURLRequest requestWithURL:url];
        [[self webView] loadRequest:req];
    }
}

- (void)closeView {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)setWebView {
    WKPreferences *wkPreferences = [[WKPreferences alloc] init];
    [wkPreferences setJavaScriptEnabled:YES];
    
    WKUserContentController *wkContentController = [[WKUserContentController alloc] init];
    [wkContentController addScriptMessageHandler:self name:@"userWiseHandler"];
    
    WKWebViewConfiguration *wkWebConfig = [[WKWebViewConfiguration alloc] init];
    [wkWebConfig setPreferences:wkPreferences];
    [wkWebConfig setUserContentController:wkContentController];
    
    self.webView = [[WKWebView alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height) configuration:wkWebConfig];

    [self.webView setUserInteractionEnabled:YES];
    [[self.webView scrollView] setBounces:YES];
    [self.webView setNavigationDelegate:self];
    
    [[self view] addSubview:self.webView];
    
    [self reconstrainWebView];
}

- (void)reconstrainWebView {
    UILayoutGuide *layoutMarginsGuide = [[self view] layoutMarginsGuide];
    
    [NSLayoutConstraint activateConstraints:@[
        [[[self webView] centerXAnchor] constraintEqualToAnchor: [[self view] centerXAnchor]],
        [[[self webView] centerYAnchor] constraintEqualToAnchor: [[self view] centerYAnchor]],
        [[[self webView] bottomAnchor] constraintEqualToAnchor: [[self view] bottomAnchor]],
        [[[self webView] leadingAnchor] constraintEqualToAnchor: [[self view] leadingAnchor]],
        [[[self webView] trailingAnchor] constraintEqualToAnchor: [[self view] trailingAnchor]],
        [[[self webView] topAnchor] constraintEqualToAnchor: [layoutMarginsGuide topAnchor]]
    ]];
    
    [[self webView] setTranslatesAutoresizingMaskIntoConstraints:NO];
}

- (void)onSurveyLoadFailed {
    id <iOSToUnityBridgeProtocol>bridgeDelegate = [SurveyController bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyEnterFailedWithResponseId:[self responseId]];
    }
    
    [self closeView];
}

- (void)onSurveyCompleted {
    id <iOSToUnityBridgeProtocol>bridgeDelegate = [SurveyController bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyCompletedWithResponseId:[self responseId]];
    }
}

- (void)onSurveyClosed {
    id <iOSToUnityBridgeProtocol>bridgeDelegate = [SurveyController bridgeDelegate];
    
    if (bridgeDelegate != nil) {
        [bridgeDelegate onSurveyClosedWithResponseId:[self responseId]];
    }
    
    [self closeView];
}

- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
    NSString *body = [message body];
    
    if ([body isEqualToString:@"survey_force_closed"]) {
        [self onSurveyClosed];
    } else if ([body isEqualToString:@"survey_completed"]) {
        [self onSurveyCompleted];
    }
}

- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error {
    [self onSurveyLoadFailed];
}
@end
