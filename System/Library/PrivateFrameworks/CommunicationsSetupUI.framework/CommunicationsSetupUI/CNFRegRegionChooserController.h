@class UIViewController, NSArray, NSString, PSRootController, PSSpecifier, UISearchController;
@protocol PSController, CNFRegRegionChooserDelegate;

@interface CNFRegRegionChooserController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

@property (retain, nonatomic) NSArray *regionList;
@property (retain, nonatomic) NSArray *filteredRegionList;
@property (retain, nonatomic) NSString *selectedRegionID;
@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) id<CNFRegRegionChooserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBecomeActive;
- (void)willResignActive;
- (void)handleURL:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)initWithStyle:(long long)a0;
- (void)willPresentSearchController:(id)a0;
- (id)specifier;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)loadView;
- (void)suspend;
- (void)didPresentSearchController:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)parentController;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void)setParentController:(id)a0;
- (void)viewDidUnload;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;
- (void)_drillDownControllersWithArray:(id)a0;
- (void)regionChooser:(id)a0 selectedRegionID:(id)a1;
- (void)_hideTableViewCells;
- (void)_selectRegionID:(id)a0;
- (void)_selectRegionList:(id)a0;
- (void)_showTableViewCells;
- (id)drillDownControllerList;
- (id)initWithRegionList:(id)a0 selectedRegionID:(id)a1;

@end
