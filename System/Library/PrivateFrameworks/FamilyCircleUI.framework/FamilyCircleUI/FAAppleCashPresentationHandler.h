@class PKPeerPaymentAssociatedAccountsController, PKPeerPaymentAssociatedAccountPresentationContext, UINavigationController;

@interface FAAppleCashPresentationHandler : NSObject

@property (retain, nonatomic) PKPeerPaymentAssociatedAccountsController *peerPaymentController;
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountPresentationContext *context;
@property (retain, nonatomic) UINavigationController *navigationController;

- (void).cxx_destruct;
- (id)initWithNavigationController:(id)a0;
- (void)presentPeerPaymentControllerWithAttributes:(id)a0 completion:(id /* block */)a1;

@end
