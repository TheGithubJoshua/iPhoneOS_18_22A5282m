@interface NewsFeed.DebugFormatLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ unfilteredEntries;
    void /* unknown type, empty encoding */ filterTerm;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nowBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterBarButtonItem;
    void /* unknown type, empty encoding */ filterTermLabel;
    void /* unknown type, empty encoding */ filterTermLabelAction;
    void /* unknown type, empty encoding */ searchController;
}

- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)doClearLogs;
- (void)doCollapse;
- (void)doNow;
- (void)doShowFilter;

@end
