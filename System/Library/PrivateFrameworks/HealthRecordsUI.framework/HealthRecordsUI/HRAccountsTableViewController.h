@class HRProfile, NSArray, HRContentStatusView;
@protocol HRRecordViewControllerFactory;

@interface HRAccountsTableViewController : UITableViewController

@property (readonly, nonatomic) HRProfile *profile;
@property (retain, nonatomic) id<HRRecordViewControllerFactory> factory;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HRContentStatusView *loadingView;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)_reloadAccounts;

@end
