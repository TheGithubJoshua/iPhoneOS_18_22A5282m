@class NSString, NSObject;
@protocol OS_dispatch_queue, CMWakeGestureDelegate;

@interface CMWakeGestureManager : NSObject {
    NSObject<OS_dispatch_queue> *fDispatchQ;
    BOOL gestureUpdatesStarted;
    struct Dispatcher { void /* function */ **x0; id x1; } *fWakeDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *fPowerStateDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::default_delete<CMWakeGestureVisitor>> { struct __compressed_pair<CMWakeGestureVisitor *, std::default_delete<CMWakeGestureVisitor>> { struct CMWakeGestureVisitor *__value_; } __ptr_; } fWakeGestureVisitor;
    long long fCurrentState;
    int fMeasureLatencyState;
    double fWakePacketTimestamp;
    struct IONotificationPort { } *fIoNotifyPort;
    unsigned int fIoNotification;
    unsigned int backlightService;
    double fLastNotificationTime;
    int fLockScreenToken;
    double fLastDisplayOnTime;
    NSString *fProcessName;
    BOOL fIsRunningInPrimaryProcess;
    BOOL fEnableLatencyAlert;
    BOOL fEnableAudioAlert;
    int fLatencyAlertThreshold;
    BOOL fIsDisplayActive;
    int fSelector;
    id<CMWakeGestureDelegate> fUpdatedDelegate;
    id<CMWakeGestureDelegate> fDelegate;
}

@property (nonatomic) id<CMWakeGestureDelegate> delegate;

+ (BOOL)hasSlowBootArgs;
+ (BOOL)isWakeGestureOverrideEnabled;
+ (id)stringForMode:(unsigned char)a0;
+ (id)stringForNotification:(unsigned char)a0;
+ (long long)toState:(unsigned char)a0;
+ (BOOL)isWakeGestureAvailable;
+ (id)stringForStartPose:(unsigned char)a0;
+ (unsigned char)toRaw:(long long)a0;
+ (id)sharedManager;
+ (id)stringForGestureState:(long long)a0;
+ (id)stringForViewPose:(unsigned char)a0;

- (void)startWakeGestureUpdates;
- (void)simulateGesture:(long long)a0 after:(double)a1;
- (void)onWakeUpdated:(const struct Sample { unsigned long long x0; struct GestureReport *x1; } *)a0;
- (void)sendWakeTriggerAnalytics:(unsigned char)a0 withDisplay:(int)a1;
- (BOOL)simulateGestureWithDelay:(double)a0 Duration:(double)a1;
- (void)logWakeLatency;
- (void)onBacklightServiceUpdated:(unsigned int)a0;
- (void)forceDetected;
- (void)onNotificationControl:(id)a0;
- (void)invokeDelegateWithState:(long long)a0;
- (void)stopWakeGestureUpdates;
- (void)onPowerStateUpdated:(const struct Sample { unsigned int x0; } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)loadPreferences;
- (void)reenableDetectedStateRecognition;
- (void)setBacklightState:(long long)a0;
- (void)playAlert;

@end
