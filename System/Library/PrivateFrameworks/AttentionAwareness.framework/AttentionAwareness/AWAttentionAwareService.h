@class NSString, AWScheduler, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_unitTestScheduler;
    NSMutableArray *_schedulers;
    int _supportedEventsNotify;
    unsigned long long _supportedEvents;
}

@property unsigned long long clientCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAttentionService;

- (void)clientCountChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1 forScheduler:(id)a2;
- (id)init;
- (void)_createUnitTestScheduler;
- (void)getSupportedEventsWithReply:(id /* block */)a0;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)getUnitTestSamplerWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)crashWithReply:(id /* block */)a0;
- (void)outputPowerLogWithReply:(id /* block */)a0;
- (void)setDebugPreference:(id)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addClient:(id)a0 clientConfig:(id)a1 clientIndex:(int)a2 unitTestMode:(BOOL)a3 reply:(id /* block */)a4 subscribeForStreamingEvents:(BOOL)a5;
- (void)dealloc;
- (void)getDebugPreferences:(id /* block */)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2;

@end
