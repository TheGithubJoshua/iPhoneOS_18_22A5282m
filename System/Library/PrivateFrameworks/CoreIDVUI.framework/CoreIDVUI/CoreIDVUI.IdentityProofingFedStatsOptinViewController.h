@interface CoreIDVUI.IdentityProofingFedStatsOptinViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ consentResult;
    void /* unknown type, empty encoding */ uiConfigFactory;
    void /* unknown type, empty encoding */ viewModels;
    void /* unknown type, empty encoding */ uiConfig;
    void /* unknown type, empty encoding */ learnMoreURL;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ learnMoreButton;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)confirmButtonClicked;
- (void)learnMoreButtonClicked;

@end
