@class CSActivationEvent, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotificationHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) CSActivationEvent *pendingActivationEvent;
@property (copy, nonatomic) id /* block */ pendingCompletion;

+ (id)sharedInstance;

- (void)_startMonitoring;
- (id)init;
- (void)_stopMonitoring;
- (void)stop;
- (void)setDelegate:(id)a0 forType:(unsigned long long)a1;
- (void)start;
- (void).cxx_destruct;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_isVoiceTriggerEvent:(id)a0;
- (BOOL)_hasPendingActivationForType:(unsigned long long)a0;

@end
