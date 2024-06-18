@class NSMutableArray;

@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (id)init;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_performBlock:(id /* block */)a0;
- (void)_performPendingBlocks;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)_performPendingBlocksIfNeeded;
- (void)scrollViewDidScroll;
- (void).cxx_destruct;
- (void)_enteredDefaultRunLoopMode;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)scrollViewWillLayoutSubviews;

@end
