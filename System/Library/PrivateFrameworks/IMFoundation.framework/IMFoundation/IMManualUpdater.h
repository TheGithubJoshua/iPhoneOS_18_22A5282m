@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (void)updateIfNeeded;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
