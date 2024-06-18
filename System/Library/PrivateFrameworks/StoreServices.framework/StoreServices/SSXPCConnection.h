@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SSXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _disconnectBlock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id /* block */ _messageBlock;
}

@property (copy) id /* block */ disconnectBlock;
@property (copy) id /* block */ messageBlock;

- (id)init;
- (id)initWithServiceName:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (void)setReplyQueue:(id)a0;
- (id)createXPCEndpoint;
- (void)sendSynchronousMessage:(id)a0 withReply:(id /* block */)a1;
- (void)_reloadEventHandler;
- (id)copyReplyQueue;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)sendMessage:(id)a0;
- (id)_initSSXPCConnection;
- (void)dealloc;

@end
