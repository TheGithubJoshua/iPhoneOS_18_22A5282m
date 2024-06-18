@class UIKBTree;

@interface ACTSkipKeyTap : ACTUserAction

@property (readonly, nonatomic) UIKBTree *intendedKey;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithIntendedKey:(id)a0 timestamp:(double)a1;

@end
