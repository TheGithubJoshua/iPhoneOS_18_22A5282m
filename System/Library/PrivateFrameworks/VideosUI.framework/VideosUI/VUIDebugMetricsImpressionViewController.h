@class NSArray;

@interface VUIDebugMetricsImpressionViewController : UITableViewController

@property (retain, nonatomic) NSArray *array;

- (id)init;
- (void)setObject:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)object;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
