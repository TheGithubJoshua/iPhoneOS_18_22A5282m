@class NSArray, PXDisplayLink;

@interface PXZoomablePhotosAlphaAnimator : PXObservable {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXDisplayLink *_displayLink;
    double _lastTickTime;
    double _currentDirection;
    double _directionAnchorColumnIndex;
    double _columnIndexDelta;
    double _columnIndexVelocity;
    long long _layerCount;
    struct PXAlphaLayer { long long columnIndex; long long columns; double itemWidth; struct PXAlphaTransitionInfo *leftTransition; struct PXAlphaTransitionInfo *rightTransition; } _layers[10];
    struct PXAlphaTransitionInfo { double fadeRangeMin; double fadeRangeMax; double autoFadeLeftValue; double autoFadeRightValue; struct PXAlphaLayer *leftLayer; struct PXAlphaLayer *rightLayer; } _transitionInfos[9];
    BOOL _isPerformingChangesWithoutAnimation;
}

@property (nonatomic) double presentationColumnIndex;
@property (nonatomic) double presentationAutoFadeAmount;
@property (nonatomic) double autoFadeColumnIndex;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) NSArray *allowedColumns;
@property (readonly, nonatomic) double columnIndex;
@property (readonly, nonatomic) double targetColumnIndex;
@property (readonly, nonatomic) long long maxColumnsForAspectFit;
@property (readonly, nonatomic) double autoFadeAmount;
@property (readonly, nonatomic) BOOL isBeingMutated;

- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)_tick:(id)a0;
- (double)_targetColumnIndex;
- (void)_invalidatePresentationValue;
- (void).cxx_destruct;
- (id)description;
- (void)setAutoFadeAmount:(double)a0;
- (void)setColumnIndex:(double)a0;
- (void)_updateTransitionInfo;
- (void)performChangesWithAnimation:(BOOL)a0 changeBlock:(id /* block */)a1;
- (void)setTargetColumnIndex:(double)a0;
- (void)dealloc;
- (void)setAllowedColumns:(id)a0;
- (void)_resetAnimatedValues;
- (void)setMaxColumnsForAspectFit:(long long)a0;
- (struct PXAlphaTransitionInfo { double x0; double x1; double x2; double x3; struct PXAlphaLayer *x4; struct PXAlphaLayer *x5; } *)_transitionInfoForValue:(double)a0;
- (void)_updatePresentationValue;

@end