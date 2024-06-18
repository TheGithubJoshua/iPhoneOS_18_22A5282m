@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)_connection;
- (void)prewarm;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
