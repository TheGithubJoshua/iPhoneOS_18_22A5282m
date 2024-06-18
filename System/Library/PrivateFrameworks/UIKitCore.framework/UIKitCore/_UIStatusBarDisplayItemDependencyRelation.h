@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation

@property (weak, nonatomic) _UIStatusBarDisplayItemState *itemState;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL requirement;

- (void).cxx_destruct;
- (id)type;
- (BOOL)isFulfilled;
- (id)_ui_descriptionBuilder;
- (id)itemStates;

@end
