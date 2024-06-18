@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
