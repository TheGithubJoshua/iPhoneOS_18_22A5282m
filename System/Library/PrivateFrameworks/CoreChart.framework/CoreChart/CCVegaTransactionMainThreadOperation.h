@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CCVegaTransactionMainThreadOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id /* block */ _block;
}

- (void)runBlock;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)provideBlock:(id /* block */)a0;
- (void)waitForBlockReady;

@end
