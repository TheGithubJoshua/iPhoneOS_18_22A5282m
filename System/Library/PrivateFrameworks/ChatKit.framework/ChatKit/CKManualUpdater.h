@interface CKManualUpdater : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
