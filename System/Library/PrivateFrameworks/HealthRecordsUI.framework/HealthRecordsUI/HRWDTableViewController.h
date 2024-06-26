@class HRProfile, NSArray, NSString, UITableView;

@interface HRWDTableViewController : HKTableViewController <HRWDTableViewSectionDelegate>

@property (readonly, nonatomic) NSArray *tableSections;
@property (retain) HRProfile *profile;
@property (retain) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewSectionClasses;

- (id)initWithCoder:(id)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)reloadSection:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0;
- (void)applicationDidEnterBackground;
- (void)_addObservers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)applicationWillEnterForeground;
- (id)indexPathForCell:(id)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)_sectionAtIndexPath:(id)a0;
- (void)pushViewController:(id)a0;
- (void)reloadTable;
- (id)_section:(long long)a0;
- (void)sectionAddedChildViewController:(id)a0;

@end
