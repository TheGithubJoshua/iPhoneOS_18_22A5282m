@class NSDictionary, NSArray, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSDictionary *flowIdentifierToCredential;
@property (retain, nonatomic) NSArray *flowIdentifiers;
@property (copy, nonatomic) NSArray *credentials;
@property (nonatomic) BOOL allowsManualEntry;
@property (retain, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
