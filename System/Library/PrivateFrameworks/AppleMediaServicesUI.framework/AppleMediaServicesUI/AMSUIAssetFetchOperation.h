@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (nonatomic, getter=isLowLatency) BOOL lowLatency;
@property (retain, nonatomic) AMSPromise *operationPromise;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (void)setQueuePriority:(long long)a0;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
