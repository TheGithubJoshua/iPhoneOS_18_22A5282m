@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *blocks;
@property (getter=isAsynchronous) BOOL asynchronous;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void)main;
- (id)init;
- (void)addExecutionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)executionBlocks;
- (id)initWithBlock:(id /* block */)a0;

@end
