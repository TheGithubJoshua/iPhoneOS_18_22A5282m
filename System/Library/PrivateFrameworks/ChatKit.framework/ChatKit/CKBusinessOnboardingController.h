@interface CKBusinessOnboardingController : OBWelcomeController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)shouldShowBusinessOnboarding;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)continueButtonTapped:(id)a0;

@end
