@class NSString, ASCAuthorizationPresentationContext;

@interface ASCredentialRequestCABLEConsentViewController : ASCredentialRequestPaneViewController <UITableViewDataSource>

@property (readonly, nonatomic) ASCAuthorizationPresentationContext *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_titleText;
- (void)_continueButtonPressed;
- (void)_setUpIconView;
- (id)initWithPresentationContext:(id)a0;
- (void)_setUpTitleView;
- (void)_addHeaderSpacerViewWithCustomSpacingAfter:(double)a0;
- (void)_setUpContinueButton;
- (long long)numberOfTableRows;

@end
