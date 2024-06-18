@class NSMutableDictionary, AWAttentionSampler, AWAttentionStreamer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    NSMutableDictionary *_streamingClients;
    NSMutableDictionary *_interruptedStreamingClients;
    AWAttentionStreamer *_attentionStreamer;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
}

@property (weak, nonatomic) id<AWSchedulerObserver> observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;

+ (id)sharedUnitTestScheduler;
+ (id)sharedScheduler;

- (id)initForUnitTest:(BOOL)a0;
- (void)removeStreamingClientwithIdentifier:(int)a0;
- (void)addClient:(id)a0;
- (void)removeInvalidClients;
- (void)armEvents;
- (void)removeInvalidClientsWithConnection:(id)a0;
- (id)cancelFaceDetectStream:(id)a0 withIdentifier:(id)a1;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (id)streamFaceDetectEvents;
- (void)reevaluate;
- (id)addStreamingClient:(id)a0 withIdentifier:(int)a1;
- (double)calculateTimeDelta:(unsigned long long)a0 endTime:(unsigned long long)a1 timebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a2;
- (void)setClientAsInterrupted:(id)a0 forKey:(id)a1;
- (void)handleNotification:(unsigned long long)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2;

@end
