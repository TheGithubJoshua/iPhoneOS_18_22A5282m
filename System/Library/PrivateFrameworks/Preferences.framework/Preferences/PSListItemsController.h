@class PSSpecifier;

@interface PSListItemsController : PSListController {
    long long _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (id)specifiers;
- (void)willEnterForeground;
- (void)suspend;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didLock;
- (id)itemsFromParent;
- (void)_addStaticText:(id)a0;
- (id)identifierForValue:(id)a0;
- (BOOL)isRestrictionList;
- (id)itemsFromDataSource;
- (void)listItemSelected:(id)a0;
- (void)prepareSpecifiersMetadata;
- (void)scrollToSelectedCell;
- (void)setIsRestrictionList:(BOOL)a0;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)a0 defaultValue:(id)a1;

@end
