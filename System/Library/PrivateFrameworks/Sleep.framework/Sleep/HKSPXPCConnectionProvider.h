@class NSMutableDictionary, NSXPCConnection, HKSPXPCConnectionInfo, NSString;
@protocol HKSPXPCConnectionProviderDelegate;

@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (readonly, nonatomic) HKSPXPCConnectionInfo *connectionInfo;
@property (readonly, copy, nonatomic) id /* block */ connectionProvider;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pendingMessagesLock;
@property (readonly, nonatomic) NSMutableDictionary *pendingMessages;
@property (readonly, nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<HKSPXPCConnectionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithConnectionInfo:(id)a0;

- (void)_didInvalidateConnection;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initWithConnectionInfo:(id)a0;
- (BOOL)isInvalidated;
- (id)succinctDescription;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)sendMessage:(id)a0;
- (void)didReceiveLifecycleNotification;
- (void)_addPendingMessage:(id)a0;
- (void)_removePendingMessage:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_retryPendingMessages;
- (id)initWithConnectionInfo:(id)a0 connectionProvider:(id /* block */)a1;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1 doSynchronously:(BOOL)a2;
- (void)_didInterruptConnection;

@end
