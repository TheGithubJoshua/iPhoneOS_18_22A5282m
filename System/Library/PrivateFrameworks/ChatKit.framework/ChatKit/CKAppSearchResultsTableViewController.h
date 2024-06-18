@class NSArray, NSString;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSArray *allPlugins;
@property (weak, nonatomic) id<CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)searchEnded;

@end
