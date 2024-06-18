@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) id<AMSPurchaseResponseProtocol> delegate;
@property (retain, nonatomic) Class purchaseTaskClass;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;

@end
