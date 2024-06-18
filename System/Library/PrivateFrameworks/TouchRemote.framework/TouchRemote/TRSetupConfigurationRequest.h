@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage

@property (copy, nonatomic) NSString *deviceName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
