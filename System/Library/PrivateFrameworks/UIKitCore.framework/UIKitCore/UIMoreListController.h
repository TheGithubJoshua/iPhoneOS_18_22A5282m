@class UIBarButtonItem, NSArray, NSString, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) BOOL moreViewControllersChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)init;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)tabBarItem;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)table;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;
- (void)_layoutCells;
- (id)_targetNavigationController;
- (void)_updateEditButton;
- (BOOL)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;

@end
