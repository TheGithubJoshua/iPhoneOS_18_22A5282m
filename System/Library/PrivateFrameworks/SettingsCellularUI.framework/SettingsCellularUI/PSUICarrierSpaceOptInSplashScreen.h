@class OBBoldTrayButton, PSListController;

@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (copy, nonatomic) id /* block */ continueButtonAction;

- (void)viewWillDisappear:(BOOL)a0;
- (id)getLogger;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)continueButtonPressed;

@end
