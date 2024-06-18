@interface Heart.AFibBurdenOnboardingResultsViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isInOnboardingModalFlow;
    void /* unknown type, empty encoding */ continueButton;
    void /* unknown type, empty encoding */ scrollViewObserver;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)hxui_cancelButtonTapped;
- (void)hxui_primaryFooterButtonTapped;

@end
