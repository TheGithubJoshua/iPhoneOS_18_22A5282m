@class NSURL, NSString;

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSURL *physicalCardImageURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long ingestionState;
@property (nonatomic) double ingestionProgress;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)a0;

@end
