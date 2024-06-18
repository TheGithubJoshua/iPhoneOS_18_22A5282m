@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController {
    id<TSKPulseAnimationControllerProtocol> _delegate;
}

@property (nonatomic) BOOL pulsating;
@property (nonatomic) BOOL autohide;
@property (nonatomic) double duration;
@property (nonatomic) double pulseOffset;

- (void)startAnimating;
- (void)disconnect;
- (id)initWithDelegate:(id)a0;
- (void)stop;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)reset;
- (BOOL)drawRoundedRect;

@end
