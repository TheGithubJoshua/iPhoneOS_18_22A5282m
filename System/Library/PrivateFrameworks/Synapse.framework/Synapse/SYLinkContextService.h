@class NSXPCListener, NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SYLinkContextService : NSObject <SYLinkContextServiceProtocol, NSXPCListenerDelegate, SYAddLinkContextServiceDelegate>

@property (retain, nonatomic) NSXPCListener *_listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) NSXPCConnection *_activeConnection;
@property (readonly, nonatomic) BOOL _forTesting;
@property (copy, nonatomic) NSArray *_contextsDataForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userEditDidAddContentItemDatas:(id)a0;
- (id)init;
- (oneway void)fetchLinkContextsDataForUserActivityInfo:(id)a0 completion:(id /* block */)a1;
- (id)_listenerEndpoint;
- (void)beginListeningToConnections;
- (void)userWillAddLinkWithActivityData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)userDidRemoveContentItemDatas:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)simpleMethod;
- (void)dealloc;
- (id)initForTesting:(BOOL)a0;

@end
