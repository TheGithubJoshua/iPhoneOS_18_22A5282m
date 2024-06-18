@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
}

+ (id)sharedInstance;

- (void)startRunningIfNecessary;
- (id)_init;
- (id)getEndpoint;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
