@interface MenstrualCyclesAppPlugin.InternalSettingsTableViewController : UITableViewController <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ notifications;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ $__lazy_storage_$_store;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coordinator;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end