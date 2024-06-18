@class NSString, BSXPCServiceConnection, NSArray, _BSNSXPCInvalidCallbackTracking, NSObject;
@protocol OS_dispatch_queue;

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, _NSXPCTransport> {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    id /* block */ _perMessageAssertionProvider;
    NSObject<OS_dispatch_queue> *_targetQueue;
    _BSNSXPCInvalidCallbackTracking *_configured_invalidCallbackTracking;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _messageOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setErrorHandler:(id /* block */)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (void)suspend;
- (void)sendNotification:(id)a0;
- (void)cancel;
- (int)auditSessionIdentifier;
- (void)activate;
- (int)processIdentifier;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (unsigned int)effectiveUserIdentifier;
- (void)sendMessage:(id)a0;
- (void)resume;
- (id)sendMessageWithReplySync:(id)a0;
- (void)setMessageHandler:(id /* block */)a0;
- (unsigned int)effectiveGroupIdentifier;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)setPerMessageAssertionAttributes:(id)a0;

@end
