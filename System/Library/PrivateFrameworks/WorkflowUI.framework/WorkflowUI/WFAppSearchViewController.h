@class NSArray, NSMutableDictionary, NSMutableOrderedSet, UIImage, NSString, UITableView;
@protocol WFAppSearchViewControllerDelegate;

@interface WFAppSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) long long appSearchType;
@property (readonly, nonatomic) NSArray *omittedAppBundleIDs;
@property (readonly, nonatomic) BOOL allowMultipleSelection;
@property (copy, nonatomic) NSArray *apps;
@property (retain, nonatomic) NSMutableOrderedSet *selectedApps;
@property (retain, nonatomic) NSMutableDictionary *cachedAppIconForBundleId;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) id<WFAppSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)cancel;
- (void)searchBarSearchButtonClicked:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)done;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateDoneButtonEnabledState;
- (id)applicationIconImageForBundleIdentifier:(id)a0;
- (void)loadApps;
- (id)initWithAppSearchType:(long long)a0;
- (void)adjustInsetsForKeyboard;
- (id)filteredApps;
- (id)initWithAppSearchType:(long long)a0 allowMultipleSelection:(BOOL)a1 selectedApps:(id)a2;
- (id)initWithAppSearchType:(long long)a0 omittedAppBundleIDs:(id)a1 allowMultipleSelection:(BOOL)a2 selectedApps:(id)a3;

@end
