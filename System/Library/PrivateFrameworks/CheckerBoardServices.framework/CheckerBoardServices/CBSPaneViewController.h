@class UIButton;

@interface CBSPaneViewController : CBSTableViewController

@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)primaryButtonTapped:(id)a0;
- (void)secondaryButtonTapped:(id)a0;
- (id)primaryButtonText;
- (id)secondaryButtonText;
- (void)_setupPrimaryButton;
- (void)_setupSecondaryButton;

@end
