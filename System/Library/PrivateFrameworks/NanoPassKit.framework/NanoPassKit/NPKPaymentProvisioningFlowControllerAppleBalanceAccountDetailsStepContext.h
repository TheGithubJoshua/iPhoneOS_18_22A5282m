@class NSString, PKCurrencyAmount;

@interface NPKPaymentProvisioningFlowControllerAppleBalanceAccountDetailsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (retain, nonatomic) NSString *appleID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
