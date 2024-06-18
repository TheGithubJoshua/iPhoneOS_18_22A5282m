@class NSArray, _UIContentUnavailableView, HKHealthRecordsStore;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths;
@property (retain) _UIContentUnavailableView *noDataView;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)fetchClinicalOptInDataCollectionFilePaths;

@end
