@class CALayer;

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}

@property (readonly, nonatomic) CALayer *referenceLayer;

- (void)updateAnimations;
- (id)init;
- (id)initWithReferenceLayer:(id)a0;
- (double)currentTime;
- (void).cxx_destruct;

@end
