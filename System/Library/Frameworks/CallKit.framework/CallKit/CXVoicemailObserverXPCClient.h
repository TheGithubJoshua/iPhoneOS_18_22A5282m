@class NSMutableDictionary, NSXPCConnection, NSHashTable, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource>

@property (readonly, nonatomic) NSMutableDictionary *mutableVoicemailUUIDToVoicemailMap;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSDictionary *voicemailUUIDToVoicemailMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedXPCClient;
+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClientSemaphore;

- (void)addDelegate:(id)a0;
- (id)init;
- (id)_init;
- (void)removeDelegate:(id)a0;
- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 isSynchronous:(BOOL)a1;
- (void)dealloc;
- (void)_invalidate;
- (void)_addOrUpdateVoicemails:(id)a0;
- (void)_removeVoicemails:(id)a0;
- (void)_requestVoicemails;
- (oneway void)addOrUpdateVoicemails:(id)a0;
- (oneway void)removeVoicemails:(id)a0;

@end
