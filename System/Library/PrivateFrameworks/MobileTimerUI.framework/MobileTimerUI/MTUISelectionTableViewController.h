@class NSArray, NSIndexPath;
@protocol MTUISelectionTableViewControllerDelegate;

@interface MTUISelectionTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *selectionData;
@property (weak, nonatomic) id<MTUISelectionTableViewControllerDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *parentIndexPath;
@property (nonatomic) BOOL allowsNone;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)deselectRowsExcluding:(unsigned long long)a0;
- (id)initWithStyle:(long long)a0 title:(id)a1 selectionData:(id)a2 parentIndexPath:(id)a3 allowsMultiple:(BOOL)a4 allowsNone:(BOOL)a5 delegate:(id)a6;

@end