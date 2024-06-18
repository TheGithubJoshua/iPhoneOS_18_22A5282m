@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (void)finish;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
