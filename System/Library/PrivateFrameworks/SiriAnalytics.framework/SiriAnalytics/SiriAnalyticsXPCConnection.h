@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_group> *_xpcPublishingGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (void)_resolveMessagesAtRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithMachServiceName:(id)a0;
- (void)_stopIdleTimer;
- (oneway void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)a0;
- (void)_saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (void)_resetLogicalClockWithCompletion:(id /* block */)a0;
- (void)_startIdleTimer;
- (oneway void)vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (void)_resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (oneway void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_connectionInvalidated;
- (void)_cleanupConnection;
- (oneway void)publishUnorderedMessages:(id)a0 completion:(id /* block */)a1;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)_publishMessages:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)a0;
- (void)_vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (void)_fetchStateForPluginWithCompletion:(id /* block */)a0;
- (void)_fetchLogicalClocksWithCompletion:(id /* block */)a0;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)_publishLargeMessageToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_publishUnorderedMessages:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_idleTimerFired;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)a0;
- (oneway void)_publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_connectionInterrupted;
- (void)_publishMessagesToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;

@end
