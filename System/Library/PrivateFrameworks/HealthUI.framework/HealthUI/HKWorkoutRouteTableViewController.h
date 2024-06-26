@class HKWorkoutRoute, HKHealthStore, HKMapRouteTableViewCell, NSMutableArray;

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKMapRouteTableViewCell *mapRouteTableViewCell;
@property (retain, nonatomic) NSMutableArray *routeData;
@property (readonly) HKWorkoutRoute *workoutRoute;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithSample:(id)a0 usingInsetStyling:(BOOL)a1 profileName:(id)a2 delegate:(id)a3;
- (id)_convertIndexPathToSuper:(id)a0;
- (void)addRouteData:(id)a0 hasFinishedQuery:(BOOL)a1;
- (id)initWithWorkoutRoute:(id)a0 healthStore:(id)a1 usingInsetStyling:(BOOL)a2 profileName:(id)a3 delegate:(id)a4;
- (void)loadRoute;
- (void)parseAndDisplayRouteData;

@end
