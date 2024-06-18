@class CATOperationQueue, NSString, CATStateMachine;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CATTransportDelegate> delegate;

- (void)didInterruptWithError:(id)a0;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)invalidateConnection;
- (void)didInvalidate;
- (id)init;
- (void)resumeQueue;
- (void)suspend;
- (void)invalidSendForMessage:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)suspendQueue;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)delegateDidInvalidate;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)sendHelloMessageAndResumeQueue;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)enqueueDelegateDidConnect;
- (void)suspendConnection;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)sendMessage:(id)a0;
- (void)resumeConnection;
- (void)delegateDidResume;
- (id)debugDescription;
- (void)resume;
- (void)dealloc;
- (void)enqueueSendForMessage:(id)a0;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)suspendQueueAndConnection;
- (void)resumeQueueAndConnection;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)didReceiveMessage:(id)a0;

@end
