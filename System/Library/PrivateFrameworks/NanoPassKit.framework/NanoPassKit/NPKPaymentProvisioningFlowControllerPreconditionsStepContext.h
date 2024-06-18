@interface NPKPaymentProvisioningFlowControllerPreconditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) unsigned long long preconditionsState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
