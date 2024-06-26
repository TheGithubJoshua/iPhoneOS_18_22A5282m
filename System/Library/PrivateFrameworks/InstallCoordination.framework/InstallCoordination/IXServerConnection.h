@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSMutableDictionary *coordinatorInstances;
@property (readonly, nonatomic) NSMutableDictionary *promiseInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retrySynchronousIPC:(id /* block */)a0;
+ (id)sharedConnection;

- (void)registerDataPromiseForUpdates:(id)a0 notifyDaemon:(BOOL)a1;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)_client_coordinatorWithUUID:(id)a0 didCancelWithReason:(id)a1 client:(unsigned long long)a2;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)a0;
- (oneway void)_client_coordinatorShouldBeginPostProcessingWithUUID:(id)a0 forRecordPromise:(id)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)a0;
- (oneway void)_client_promiseWithUUID:(id)a0 didCancelWithReason:(id)a1 client:(unsigned long long)a2;
- (void)unregisterForUpdatesForAppInstallCoordinatorWithUUID:(id)a0;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)a0 forRecordPromise:(id)a1;
- (void)registerAppInstallCoordinatorForUpdates:(id)a0 notifyDaemon:(BOOL)a1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)a0;
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)a0;
- (void)_onQueue_scanForAndRemoveEmptyHashTables;
- (void)_onQueue_reSetupObserversAfter:(id)a0;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;
- (oneway void)_client_coordinatorWithUUID:(id)a0 didUpdateProgress:(double)a1 forPhase:(unsigned long long)a2 overallProgress:(double)a3;
- (void)resetDaemonConnection;
- (void).cxx_destruct;
- (oneway void)_client_coordinatorWithUUID:(id)a0 configuredPromiseDidBeginFulfillment:(unsigned long long)a1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)a0;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)a0 forRecordPromise:(id)a1;
- (void)_onQueue_doCleanupForPromiseWithUUID:(id)a0;
- (void)unregisterForUpdatesForDataPromiseWithUUID:(id)a0;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)a0;
- (void)_onQueue_doCleanupForCoordinatorWithUUID:(id)a0;

@end
