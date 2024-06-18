@class NSXPCListener, NSString, NSArray, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CWFXPCListenerDelegate;

@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate> {
    NSXPCListener *_XPCListener;
    NSMutableArray *_mutableXPCConnections;
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSXPCInterface *_requestXPCInterface;
    NSXPCInterface *_eventXPCInterface;
    NSArray *_bootArgs;
}

@property (retain) id<CWFXPCListenerDelegate> delegate;
@property (readonly, nonatomic) long long serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (id)registeredEventIDs;
- (id)registeredActivities;
- (id)init;
- (void)suspend;
- (id)XPCConnections;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithServiceType:(long long)a0;
- (BOOL)__allowXPCConnection:(id)a0 serviceType:(long long)a1;
- (void)resume;
- (void)XPCConnection:(id)a0 updatedRegisteredEventIDs:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)XPCConnection:(id)a0 canceledXPCRequestsWithUUID:(id)a1;
- (void)XPCConnection:(id)a0 receivedXPCRequest:(id)a1;

@end
