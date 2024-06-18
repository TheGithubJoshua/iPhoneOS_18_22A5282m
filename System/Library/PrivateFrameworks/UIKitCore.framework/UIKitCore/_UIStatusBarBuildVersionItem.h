@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (BOOL)needsUpdate;
- (id)viewForIdentifier:(id)a0;
- (void)_create_buildVersionView;
- (void).cxx_destruct;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
