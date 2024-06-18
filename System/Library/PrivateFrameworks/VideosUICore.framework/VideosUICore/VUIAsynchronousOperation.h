@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)executionDidBegin;
- (BOOL)isFinished;
- (void)finishExecutionIfPossible;

@end
