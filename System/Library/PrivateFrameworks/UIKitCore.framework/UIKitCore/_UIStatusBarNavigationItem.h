@class _UIStatusBarStringView;

@interface _UIStatusBarNavigationItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (id)createDisplayItemForIdentifier:(id)a0;
- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_nameView;

@end
