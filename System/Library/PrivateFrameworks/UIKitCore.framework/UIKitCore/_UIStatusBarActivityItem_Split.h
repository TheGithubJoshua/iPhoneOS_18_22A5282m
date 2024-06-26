@class _UIStatusBarIdentifier, _UIStatusBarActivityView, _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly

@property (class, readonly) _UIStatusBarIdentifier *pillDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *syncStartDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarActivityView *activityView;
@property (retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView;

- (id)viewForIdentifier:(id)a0;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })activityIndicatorAlignmentRectInsets;
- (void)_create_activityView;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void)_create_syncStartView;

@end
