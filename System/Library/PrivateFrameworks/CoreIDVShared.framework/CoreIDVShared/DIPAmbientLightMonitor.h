@class NSObject;
@protocol OS_dispatch_queue;

@interface DIPAmbientLightMonitor : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    struct __IOHIDServiceClient { } *_service;
    NSObject<OS_dispatch_queue> *_almQueue;
    int _luxLevel;
}

@property (readonly, nonatomic) int luxLevel;

- (id)init;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
