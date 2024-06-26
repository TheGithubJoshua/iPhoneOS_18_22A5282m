@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FudInternalConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id /* block */ messageHandler;
    NSMutableDictionary *pendingRequests;
    BOOL didStop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClientIdentifier:(id)a0 handlerQueue:(id)a1 messageHandler:(id /* block */)a2;
- (void)handleInboundNotification:(id)a0;
- (void)stop;
- (void)sendMessageToFud:(id)a0;
- (long long)getNextMessageID;
- (void)sendMessageToFud:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;

@end
