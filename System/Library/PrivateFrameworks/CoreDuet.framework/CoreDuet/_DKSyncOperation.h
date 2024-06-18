@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (id)init;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)dealloc;
- (void)endOperation;
- (void)startOperation;

@end
