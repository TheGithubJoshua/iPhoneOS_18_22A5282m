@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, DDSManaging, DDSManagingDelegate;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate>

@property (retain, nonatomic) id<DDSManaging> serverOverride;
@property (retain, nonatomic) NSXPCConnection *remoteServer;
@property (readonly, nonatomic) DDSInterface *sharedInstance;
@property (retain, nonatomic) id<DDSManagingDelegate> mDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionUsageQueue;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)sharedInstance;
+ (unsigned long long)xpcConnectionOptionsForServer;

- (id)init;
- (id)syncServiceObjectProxy;
- (id)syncServer;
- (void)teardownXPCConnection;
- (id)serviceObjectProxy;
- (id)server;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void).cxx_destruct;
- (void)createConnectionIfNecessary;
- (void)triggerUpdate;
- (void)triggerDump;
- (void)dealloc;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)removeAssertionWithID:(id)a0;

@end
