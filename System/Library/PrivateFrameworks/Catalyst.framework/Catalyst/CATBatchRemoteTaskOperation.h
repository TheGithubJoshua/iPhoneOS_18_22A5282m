@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;

- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)cancelSubOperations;
- (id)initWithRemoteTaskOperations:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;
- (void)remoteTaskDidFinish:(id)a0;

@end
