@class NSString, CADisplayLink;

@interface PXDisplayLink : NSObject <PXDisplayLinkProtocol> {
    CADisplayLink *_displayLink;
    double _updateCycleTimestamp;
    double _updateCycleTargetTimestamp;
}

@property (class, readonly, nonatomic) BOOL highFramerateRequiresReasonAndRange;

@property (nonatomic) BOOL isHighFrameRateActive;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *runloopModes;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double currentMediaTime;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void)_addToRunLoop;
- (void)_tick:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2;
- (void)dealloc;
- (void)_updateIsHighFrameRateActive;

@end
