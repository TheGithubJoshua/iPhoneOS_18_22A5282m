@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController

@property (retain, nonatomic) VUIDebugMetricsEvent *event;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithEvent:(id)a0;
- (void)performValidation;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
