@class NSString, UIViewController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (nonatomic) long long paymentSetupFeatureState;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) BOOL didSucceed;
@property (copy, nonatomic) NSString *referrerIdentifier;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)run;
- (void)paymentSetupViewControllerDidDismiss;
- (id)_paymentSetupFeature;

@end
