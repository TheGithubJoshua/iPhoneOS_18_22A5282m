@class NSMutableArray, TSADebugViewController;

@interface TSADebugTableViewController : UITableViewController {
    NSMutableArray *_debugItems;
    TSADebugViewController *_parent;
}

- (id)init;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithParent:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)addItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)hideImmediately;

@end
