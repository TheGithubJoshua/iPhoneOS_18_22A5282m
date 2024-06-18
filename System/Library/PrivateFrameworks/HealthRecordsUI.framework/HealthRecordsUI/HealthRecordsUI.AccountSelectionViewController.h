@interface HealthRecordsUI.AccountSelectionViewController : UITableViewController {
    void /* unknown type, empty encoding */ iconProvider;
    void /* unknown type, empty encoding */ preferredSize;
    void /* unknown type, empty encoding */ allAccounts;
    void /* unknown type, empty encoding */ selectedAccounts;
    void /* unknown type, empty encoding */ accountIcons;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
