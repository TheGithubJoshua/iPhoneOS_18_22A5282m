@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic) BOOL allowsReaderModeEntry;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
