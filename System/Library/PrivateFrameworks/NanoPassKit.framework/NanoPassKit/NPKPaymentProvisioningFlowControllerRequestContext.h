@class NSString, NPKProtoStandaloneRequestHeader;

@interface NPKPaymentProvisioningFlowControllerRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NPKProtoStandaloneRequestHeader *requestHeader;
@property (readonly, nonatomic) NSString *currentStepIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestHeader:(id)a0;

@end
