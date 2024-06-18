@interface BLSHPendingTwoPhaseUpdateDisplayMode : BLSHPendingUpdateDisplayMode

@property (weak) BLSHPendingTwoPhaseUpdateDisplayMode *previous;
@property (retain) BLSHPendingTwoPhaseUpdateDisplayMode *next;

- (BOOL)isStarted;
- (id)first;
- (BOOL)isTwoPhaseUpdate;
- (id)last;
- (BOOL)isFullyCompleted;
- (id)rampOperation;
- (void).cxx_destruct;
- (id)description;
- (id)updateOperation;

@end
