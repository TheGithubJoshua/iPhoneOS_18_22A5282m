@class IMDaemonListener, NSLock, IMRemoteObject, NSProtocolChecker, NSRecursiveLock, NSMutableDictionary, NSString, IMDaemonQueryController, NSMutableArray, IMLocalObject, NSObject, NSArray;
@protocol OS_dispatch_queue, IMDaemonProtocol;

@interface _IMLegacyDaemonController : NSObject <IMDaemonControlling, IMDaemonControlling_Private>

@property (retain, nonatomic) IMRemoteObject<IMDaemonProtocol> *remoteObject;
@property (retain, nonatomic) NSMutableDictionary *listenerMap;
@property (retain, nonatomic) IMLocalObject *localObject;
@property (retain, nonatomic) IMDaemonListener *listener;
@property (retain, nonatomic) NSMutableArray *services;
@property (retain, nonatomic) NSProtocolChecker *protocol;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerLockQueue;
@property (nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } remoteDaemonLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localObjectLockQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *daemonConnectionQueue;
@property (retain, nonatomic) NSRecursiveLock *connectionLock;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (retain, nonatomic) NSLock *blockingLock;
@property (nonatomic) BOOL hasCheckedForDaemon;
@property (nonatomic) BOOL preventReconnect;
@property (nonatomic) BOOL inBlockingConnect;
@property (nonatomic) BOOL acquiringDaemonConnection;
@property (nonatomic) BOOL hasBeenSuspended;
@property (readonly, nonatomic, getter=isRequestingConnection) BOOL requestingConnection;
@property (nonatomic) unsigned int gMyFZListenerCapabilities;
@property (nonatomic) unsigned int cachedCapabilities;
@property (nonatomic) unsigned int lastUpdatedCapabilities;
@property (setter=__setCapabilities:) unsigned int _capabilities;
@property (setter=_setAutoReconnect:) BOOL _autoReconnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) id<IMDaemonProtocol> remoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> synchronousRemoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> synchronousReplyingRemoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> replyingRemoteDaemon;
@property (readonly, nonatomic) IMDaemonQueryController *queryController;
@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow;
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny;
@property (retain, nonatomic, setter=_setListenerID:) NSString *listenerID;
@property (weak, nonatomic) id delegate;
@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;
@property (readonly, nonatomic) BOOL isConnecting;

+ (void)_blockUntilSendQueueIsEmpty;
+ (BOOL)_applicationWillTerminate;
+ (void)_setApplicationWillTerminate;

- (void)setQueryContext:(id)a0;
- (BOOL)hasListenerForID:(id)a0;
- (id)init;
- (BOOL)connectToDaemon;
- (BOOL)remoteObjectExists;
- (void)_setCapabilities:(unsigned int)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)removeListenerID:(id)a0;
- (unsigned long long)processCapabilities;
- (void)_blockUntilSendQueueIsEmpty;
- (void)blockUntilConnected;
- (void)disconnectFromDaemon;
- (BOOL)consumeQueryContext:(id)a0;
- (void)systemApplicationDidSuspend;
- (BOOL)addListenerID:(id)a0 capabilities:(unsigned int)a1;
- (void)killDaemon;
- (unsigned int)capabilitiesForListenerID:(id)a0;
- (void)unsetQueryContext:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)setCapabilities:(unsigned int)a0 forListenerID:(id)a1;
- (BOOL)_makeConnectionWithLaunch:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)_remoteObject;
- (void)systemApplicationDidResume;
- (void)sendQueryWithReply:(BOOL)a0 query:(id /* block */)a1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1 blockUntilConnected:(BOOL)a2;
- (void)_disconnectFromDaemonWithForce:(BOOL)a0;
- (void)_noteSetupComplete;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (void).cxx_destruct;
- (void)remoteObjectDiedNotification:(id)a0;
- (void)localObjectDiedNotification:(id)a0;
- (void)_handleDaemonException:(id)a0;
- (void)_listenerSetUpdated;
- (BOOL)localObjectExists;
- (void)_localObjectCleanup;
- (void)systemApplicationDidEnterBackground;
- (void)_agentDidLaunchNotification:(id)a0;
- (void)dealloc;
- (void)_remoteObjectCleanup;
- (void)systemApplicationWillEnterForeground;
- (double)_connectionTimeout;
- (BOOL)_acquiringDaemonConnection;
- (BOOL)__isLocalObjectValidOnQueue:(id)a0;
- (BOOL)__isRemoteObjectValid;
- (void)_connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1;
- (void)disconnectFromDaemonWithForce:(BOOL)a0;
- (void)listener:(id)a0 setListenerCapabilities:(unsigned int)a1;
- (void)listener:(id)a0 setValue:(id)a1 ofPersistentProperty:(id)a2;
- (void)listener:(id)a0 setValue:(id)a1 ofProperty:(id)a2;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)a0;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)a0;

@end
