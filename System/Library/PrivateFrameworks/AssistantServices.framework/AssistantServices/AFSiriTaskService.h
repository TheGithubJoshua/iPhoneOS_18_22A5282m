@class NSXPCListener, NSString, AFSiriTaskDeliveryHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    AFSiriTaskDeliveryHandler *_deliveryHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)a0;
+ (id)appTaskService;

- (id)initWithMachServiceName:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
