@class WKContentView;

@interface WKSelectPickerTableViewController : UITableViewController {
    WKContentView *_contentView;
    long long _numberOfSections;
    struct RetainPtr<NSMutableSet<NSNumber *>> { void *m_ptr; } _collapsedSections;
    struct RetainPtr<UIBarButtonItem> { void *m_ptr; } _previousButton;
    struct RetainPtr<UIBarButtonItem> { void *m_ptr; } _nextButton;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithView:(id)a0;
- (void)next:(id)a0;
- (void)close:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)groupHeaderFont;
- (void)didTapSelectPickerGroupHeaderView:(id)a0;
- (long long)findItemIndexAt:(id)a0;
- (long long)numberOfRowsInGroup:(long long)a0;
- (void *)optionItemAtIndexPath:(id)a0;
- (void)previous:(id)a0;

@end
