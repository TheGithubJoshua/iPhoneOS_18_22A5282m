@class NSString;

@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding> {
    unsigned long long _depth;
    unsigned long long _count;
    unsigned long long _start;
    struct TouchHistory { struct CGPoint { double x0; double x1; } x0; double x1; } *_history;
    double _peakSpeed;
    double _lastTouchLatency;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDepth:(unsigned long long)a0;
- (void)updateWithLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (double)peakSpeed;
- (int)touchHistoryDepthForTimeDuration:(double)a0 forComputingDerivative:(BOOL)a1;
- (void)dealloc;
- (void)updateWithLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 touchLatency:(double)a2;
- (void)reset;

@end
