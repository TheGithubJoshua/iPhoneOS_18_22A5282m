@class PUParallaxLayerStackView;

@interface PUParallaxLayerStackDebugTableViewController : UITableViewController

@property (retain, nonatomic) PUParallaxLayerStackView *layerStackView;

- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)labelForLayer:(id)a0;
- (id)layerForIndexPath:(id)a0;
- (id)layersSortedByViewDepth;
- (void)requestNewZPositionForCellAtIndexPath:(id)a0;

@end
