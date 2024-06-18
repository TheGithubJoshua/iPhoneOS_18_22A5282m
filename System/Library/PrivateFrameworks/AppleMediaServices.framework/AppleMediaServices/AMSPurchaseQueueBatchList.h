@class AMSThreadSafeObject;

@interface AMSPurchaseQueueBatchList : NSObject

@property (retain, nonatomic) AMSThreadSafeObject *backingArray;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)appendBatch:(id)a0;
- (id)batchForPurchase:(id)a0;
- (id)nextPurchase;
- (void)popBatch:(id)a0;

@end
