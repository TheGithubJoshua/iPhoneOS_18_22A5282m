@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}

- (id)init;
- (BOOL)flush;
- (void)enqueuePostCommitBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enqueuePostSynchronizeBlock:(id /* block */)a0;

@end
