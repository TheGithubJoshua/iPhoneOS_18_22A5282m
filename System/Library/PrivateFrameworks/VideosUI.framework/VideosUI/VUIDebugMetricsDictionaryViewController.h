@class NSDictionary;

@interface VUIDebugMetricsDictionaryViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *dictionary;

- (id)initWithDictionary:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)sortedKeys;

@end
