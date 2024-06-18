@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (void)main;
- (BOOL)isAsynchronous;
- (void)finish;
- (id)init;
- (BOOL)isReady;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
