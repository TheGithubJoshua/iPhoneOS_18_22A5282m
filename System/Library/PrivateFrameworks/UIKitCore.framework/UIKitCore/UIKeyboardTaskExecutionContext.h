@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    id /* block */ _continuation;
    id /* block */ _pendingCompletionBlock;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *executionQueue;
@property (retain, nonatomic) id info;

- (id)init;
- (id)initWithExecutionQueue:(id)a0;
- (void)transferExecutionToMainThreadWithTask:(id /* block */)a0;
- (void)returnExecutionToParentWithInfo:(id)a0;
- (id /* block */)takeOwnershipOfPendingCompletionBlock;
- (void)setPendingCompletionBlock:(id /* block */)a0;
- (id)initWithParentContext:(id)a0 continuation:(id /* block */)a1;
- (void).cxx_destruct;
- (id)childWithContinuation:(id /* block */)a0;
- (void)returnExecutionToParent;

@end
