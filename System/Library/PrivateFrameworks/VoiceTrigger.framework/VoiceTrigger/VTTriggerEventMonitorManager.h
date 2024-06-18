@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitorManager : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void).cxx_destruct;
- (void)notifyVoiceTrigger;
- (void)notifyEarlyDetect;

@end
