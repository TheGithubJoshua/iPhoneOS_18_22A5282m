@class NSError, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cardAdded;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
