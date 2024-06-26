@class UIFont, NSArray, HKHealthStore, HKSample, HKAuthorizationStore;

@interface WDAppAccessListViewController : HKTableViewController {
    HKHealthStore *_healthStore;
    HKAuthorizationStore *_authorizationStore;
}

@property (retain, nonatomic) NSArray *allowedApps;
@property (retain, nonatomic) NSArray *disallowedApps;
@property (retain, nonatomic) HKSample *sample;
@property (retain, nonatomic) UIFont *bodyFont;

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (id)_sourceForIndexPath:(id)a0;
- (void)_loadIconForSource:(id)a0 onCell:(id)a1 ofTableView:(id)a2;
- (void)_refreshAppAuthorizationData;
- (id)initWithSample:(id)a0 healthStore:(id)a1;
- (id)_identifierForCellInSection:(long long)a0;
- (id)_textForCellAtIndexPath:(id)a0;
- (void)resetAccess;

@end
