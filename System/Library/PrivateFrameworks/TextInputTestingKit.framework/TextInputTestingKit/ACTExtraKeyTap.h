@class UIKBTree;

@interface ACTExtraKeyTap : ACTUserAction

@property (readonly, nonatomic) UIKBTree *touchedKey;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithTouchedKey:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 timestamp:(double)a2;

@end
