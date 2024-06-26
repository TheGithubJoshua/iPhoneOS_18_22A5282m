@class NSString;

@interface PUWhatsNewWelcomeViewController : OBWelcomeController <PUWelcomeProtocol>

@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentIfNecessaryFromViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (void)resetLastPresentationInfo;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)_handleContinueButton:(id)a0;
- (void)_showAppleMusicPrivacyPromptIfNeeded;

@end
