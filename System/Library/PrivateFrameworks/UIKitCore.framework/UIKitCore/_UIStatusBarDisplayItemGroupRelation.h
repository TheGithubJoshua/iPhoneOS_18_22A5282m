@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) BOOL requiresAll;

- (void).cxx_destruct;
- (id)type;
- (BOOL)isFulfilled;
- (id)_ui_descriptionBuilder;
- (id)itemStates;

@end
