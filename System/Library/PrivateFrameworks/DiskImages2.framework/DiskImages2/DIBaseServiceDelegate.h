@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DIBaseServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)sandboxProfile;
- (id)serviceName;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)enterSandbox;
- (void)createListener;
- (BOOL)setupNewConnection:(id)a0;
- (void)startXPClistener;
- (void)validateConnection;

@end
