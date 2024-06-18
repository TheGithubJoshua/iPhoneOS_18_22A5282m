@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithPurchase:(id)a0;

@end
