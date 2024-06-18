@protocol ACTUserAction;

@interface ACTDoubleKeyTap : ACTUserAction

@property (readonly, nonatomic) id<ACTUserAction> firstTap;
@property (readonly, nonatomic) id<ACTUserAction> secondTap;

- (void).cxx_destruct;
- (id)description;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithFirstTap:(id)a0 secondTap:(id)a1;

@end
