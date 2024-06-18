@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceListener : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)sharedServiceListener;

- (void)main;
- (id)_init;
- (void)connectionInvalidated:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initAnonymousListener;
- (void)xpcConnectionAccept:(id)a0;
- (void)xpcListenerEvent:(id)a0;

@end
