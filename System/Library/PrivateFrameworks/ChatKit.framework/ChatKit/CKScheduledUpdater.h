@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) BOOL updateSynchronouslyIfPossible;

- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingAllUpdates;
- (void)endHoldingAllUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:(id)a0;

@end
