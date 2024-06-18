@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    PKPaymentAuthorizationLayout *_layout;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;
@property (readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController;

- (id)init;
- (id)initWithStyle:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_backgroundColorForModalFormSheet;
- (id)initWithLayoutStyle:(long long)a0 paymentRequest:(id)a1 presenter:(id)a2;

@end
