@class NSMutableArray;

@interface SBCancelableBlockOperation : NSOperation {
    NSMutableArray *_blocks;
}

- (void)main;
- (id)init;
- (void)addBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
