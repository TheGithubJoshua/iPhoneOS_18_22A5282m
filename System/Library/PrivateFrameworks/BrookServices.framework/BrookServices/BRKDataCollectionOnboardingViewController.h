@class BRKSettings;

@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {
    BRKSettings *_settings;
}

+ (BOOL)shouldPresentOnboarding;
+ (void)presentInViewController:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)openSettings;
- (void)tappedLearnMore;
- (void)tappedDisable;
- (void)tappedEnable;

@end
