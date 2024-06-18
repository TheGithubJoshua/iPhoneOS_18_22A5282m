@class NSArray;

@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSArray *setupFields;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
