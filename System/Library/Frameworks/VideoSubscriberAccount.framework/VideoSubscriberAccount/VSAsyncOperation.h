@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (BOOL)isAsynchronous;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (void)executionDidBegin;
- (BOOL)isFinished;
- (void)finishExecutionIfPossible;

@end
