@class NSString, WLWelcomeController;

@interface WLWaitingForDataTypeSelectionViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) id /* block */ cancellationBlock;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)cancel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithSourceDevice:(id)a0 welcomeController:(id)a1;
- (void)showActivityIndicatorView;

@end
