@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject {
    struct dispatch_queue_s { } *_queue;
    struct shared_ptr<abm::client::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } abmPLClnt;
}

@property (retain) id<PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (void)startListening;
- (void)removeDeviceConfig;
- (id)init;
- (void)regMetricListener;
- (void)addDeviceConfigWith:(id)a0;
- (void)triggerPeriodicMetrics;
- (void)regBBWakeListener;
- (void)sendMetricToLoggerUsing:(id)a0;
- (id)getLTESleepManagerStats;
- (void)regBootStateListener;
- (id)getBasebandBootState;
- (void)sendWakeInfoToLoggerUsing:(id)a0;
- (void)addMavDeviceConfigDebug;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendBootStateChangInfoToLoggerUsing:(id)a0;
- (void)addICEDeviceConfig;
- (void)sendTriggerToLoggerUsing:(id)a0;
- (id)getBasebandTimeAndLatency;
- (void)addMavDeviceConfig;
- (void)regTriggerListener;
- (void)addICEDeviceConfigDebug;

@end
