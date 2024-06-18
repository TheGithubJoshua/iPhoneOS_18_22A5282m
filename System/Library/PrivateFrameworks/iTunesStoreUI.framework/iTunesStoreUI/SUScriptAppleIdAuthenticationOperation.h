@class NSString, UIViewController, AKAppleIDAuthenticationInAppContext;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation {
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
    UIViewController *_viewController;
}

@property (retain, nonatomic) NSString *status;

- (void).cxx_destruct;
- (void)run;
- (id)initWithUsername:(id)a0 password:(id)a1 viewController:(id)a2;
- (void)sendCompletionCallback:(id)a0;

@end
