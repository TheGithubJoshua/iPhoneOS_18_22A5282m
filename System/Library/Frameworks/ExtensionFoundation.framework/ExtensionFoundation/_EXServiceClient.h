@class NSObject, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _EXServiceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeQueriesLock;
}

@property (retain, nonatomic) NSXPCConnection *discoveryConnection;
@property (retain, nonatomic) NSXPCConnection *tccProxyConnection;
@property (retain, nonatomic) NSXPCConnection *launchConnection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } *connectionLock;
@property (retain, nonatomic) NSMutableSet *activeQueries;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } *activeQueriesLock;
@property (readonly) NSObject<OS_dispatch_queue> *notifyQueue;

+ (id)sharedInstance;

- (void)reconnectActiveQueries;
- (BOOL)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 error:(id *)a1;
- (id)_init;
- (id)resultWithQuery:(id)a0;
- (void)_beginActiveQuery:(id)a0;
- (void)addQueryObserver:(id)a0;
- (id)extensionsWithQueries:(id)a0;
- (void).cxx_destruct;
- (void)fetchExtensionsWithQueries:(id)a0 completionHandler:(id /* block */)a1;
- (id)_activeQueryForQuery:(id)a0;
- (void)removeQueryObserver:(id)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)activeQueriesLock;
- (id)launchWithConfiguration:(id)a0 error:(id *)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)connectionLock;
- (void)fetchResultWithQuery:(id)a0 completionHandler:(id /* block */)a1;

@end
