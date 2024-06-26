@class NSMutableArray;

@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks;

- (id)init;
- (void)addLink:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)popAndRunWithCompletion:(id /* block */)a0 testFailure:(id)a1;

@end
