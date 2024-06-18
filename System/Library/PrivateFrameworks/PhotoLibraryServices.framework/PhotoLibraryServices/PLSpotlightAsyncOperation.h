@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (void)main;
- (BOOL)isAsynchronous;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
