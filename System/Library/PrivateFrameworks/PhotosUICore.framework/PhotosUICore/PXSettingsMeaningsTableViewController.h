@class NSArray, NSDictionary;

@interface PXSettingsMeaningsTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *meaningLabels;
@property (retain, nonatomic) NSDictionary *meaningDataContainerByMeaningLabels;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_meaningDataContainerByMeaningLabels;
- (id)_momentIdentifiersByMeaningLabel;

@end
