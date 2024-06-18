@interface WLKAsyncOperation : NSOperation {
    int _state;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)executionDidBegin;
- (BOOL)isFinished;
- (void)finishExecutionIfPossible;

@end
