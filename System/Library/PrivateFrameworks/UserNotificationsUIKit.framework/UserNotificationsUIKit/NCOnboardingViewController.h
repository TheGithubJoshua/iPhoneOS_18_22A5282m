@class NSString, OBTrayButton;
@protocol NCOnboardingViewControllerDelegate;

@interface NCOnboardingViewController : OBWelcomeController {
    OBTrayButton *_nextButton;
}

@property (weak, nonatomic) id<NCOnboardingViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nextButtonText;
@property (nonatomic) BOOL nextButtonEnabled;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentLayout:(long long)a2;
- (void)_nextButtonPressed:(id)a0;

@end
