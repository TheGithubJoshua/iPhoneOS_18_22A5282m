@class _EXQuery, NSSet, NSXPCListenerEndpoint, NSXPCConnection, NSXPCListener, NSString;

@interface _EXActiveClientQuery : NSObject <NSXPCListenerDelegate, EXQueryResultsProtocol>

@property (readonly) _EXQuery *query;
@property (retain) NSSet *observers;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (weak) NSXPCConnection *connection;
@property (readonly, getter=isActive) BOOL active;
@property BOOL started;
@property (readonly) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addQueryObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToActiveQuery:(id)a0;
- (void)removeQueryObserver:(id)a0;
- (id)initWithQuery:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reset;
- (void)availabilityDidChange:(id)a0 reply:(id /* block */)a1;
- (void)query:(id)a0 resultsDidUpdate:(id)a1 reply:(id /* block */)a2;

@end
