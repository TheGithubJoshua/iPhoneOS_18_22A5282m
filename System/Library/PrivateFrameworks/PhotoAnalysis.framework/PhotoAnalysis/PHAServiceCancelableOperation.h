@class NSInvocation, NSObject;
@protocol OS_dispatch_group, PHAServiceOperationListener;

@interface PHAServiceCancelableOperation : NSObject {
    long long _operationId;
    BOOL _cancelRequested;
    id /* block */ _cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}

@property (readonly) NSInvocation *invocation;
@property (readonly) long long operationId;
@property (readonly) BOOL isCancelled;
@property (weak) id<PHAServiceOperationListener> delegate;

+ (id)operationNotFoundError:(long long)a0;

- (id)operationCanceledError:(BOOL)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (BOOL)cancel;
- (void)setCancellationBlock:(id /* block */)a0;
- (void)_startWork;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOperationId:(long long)a0 invocation:(id)a1;
- (void)enqueueOnQueue:(id)a0;
- (void)waitForCompletion;
- (void)runOperation;

@end
