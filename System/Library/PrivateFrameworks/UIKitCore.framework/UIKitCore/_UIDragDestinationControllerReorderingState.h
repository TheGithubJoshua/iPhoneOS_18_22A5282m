@class UICollectionView, _UIDragMovementCadenceSettings, _UIDragDestinationControllerSessionState, _UIVelocityIntegrator;

@interface _UIDragDestinationControllerReorderingState : NSObject

@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (nonatomic) long long reorderCount;
@property (nonatomic) double reorderBecamePossibleTime;
@property (nonatomic) long long dragMovementPhase;
@property (retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings;
@property (nonatomic) BOOL hasStartedInteractiveReorder;
@property (nonatomic) BOOL supportsLocalSessionReordering;
@property (readonly, nonatomic) BOOL hasPerformedReordering;

- (void)didEndInteractiveReorder;
- (id)initWithSessionState:(id)a0 collectionView:(id)a1;
- (void)didReorder;
- (void)didBeginInteractiveReorder;
- (void).cxx_destruct;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)a0;
- (id)_reorderCadenceSettings;
- (void)reorderResetToStartingLocation;
- (void)velocityExceededThreshold;
- (void)reorderingDidBecomePossible;

@end
