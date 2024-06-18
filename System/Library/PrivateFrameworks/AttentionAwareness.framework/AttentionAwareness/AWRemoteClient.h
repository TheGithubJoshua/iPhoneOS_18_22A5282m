@class NSXPCConnection, NSString, NSArray, NSSet, AWScheduler, NSObject, AWAttentionAwarenessConfiguration, AWAttentionEvent;
@protocol OS_dispatch_queue, AWFrameworkClient;

@interface AWRemoteClient : NSObject <AWRemoteClient> {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id<AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _tagIndex;
    unsigned long long _notificationMask;
    unsigned long long _eventMask;
    unsigned long long _attentionLostEventMask;
    BOOL _sampleWhileAbsent;
    BOOL _retroactiveTimeoutMode;
    BOOL _continuousFaceDetectMode;
    NSArray *_attentionLostTimeoutsSec;
    NSSet *_allowedHIDEventsForRemoteEvent;
    struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; } *_clientState;
    AWAttentionEvent *_lastEvent;
    AWAttentionAwarenessConfiguration *_lastConfig;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long samplingInterval;
@property (readonly, nonatomic) unsigned long long samplingDelay;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, nonatomic) int clientIndex;
@property (nonatomic) unsigned long long streamingStartTime;
@property (nonatomic) double streamingDuration;

- (void)pingWithReply:(id /* block */)a0;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)notifyClientOfStreamingEvent:(id)a0;
- (id)connection;
- (unsigned long long)nextAttentionLostTime:(BOOL *)a0;
- (void)updateEventTimesForMask:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)_resetAttentionLostTimer;
- (void)updateDeadlinesForTime:(unsigned long long)a0;
- (void)deliverNotification:(unsigned long long)a0;
- (void)getLastEvent:(id /* block */)a0;
- (void)invalidateWithHandler:(id /* block */)a0;
- (void)pollWithTimeout:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setClientConfig:(id)a0 shouldReset:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)shouldInitBeSent;
- (void)streamFaceDetectEventsWithReply:(id /* block */)a0;
- (unsigned long long)_activeEventMask;
- (BOOL)_setClientConfig:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (void)initializeClientState;
- (void)resetAttentionLostTimerWithReply:(id /* block */)a0;
- (BOOL)_isSamplingClient;
- (void)notifyHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2;
- (void)invalidate;
- (BOOL)_interestedInHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; } x0; struct AWRemoteMetadata { long long x0; long long x1; } x1; } *)a2;
- (void).cxx_destruct;
- (void)reevaluateConfig;
- (id)description;
- (id)initWithProxy:(id)a0 connection:(id)a1 clientConfig:(id)a2 clientIndex:(int)a3 scheduler:(id)a4 error:(id *)a5;
- (unsigned long long)nextSampleTime;
- (void)deliverEvent:(id)a0;
- (void)notifyStreamingClientOfInterruption:(unsigned long long)a0;
- (void)deliverPollEventType:(unsigned long long)a0 event:(id)a1;
- (BOOL)isStreamingClient;
- (void)cancelFaceDetectStreamWithReply:(id /* block */)a0;
- (unsigned long long)nextTimerForTime:(unsigned long long)a0;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; } x0; struct AWRemoteMetadata { long long x0; long long x1; } x1; } *)a2;

@end
