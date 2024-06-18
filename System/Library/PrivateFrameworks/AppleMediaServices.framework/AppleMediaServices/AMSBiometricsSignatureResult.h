@class NSString, AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSBiometricsSignatureRequest *originalRequest;
@property (retain, nonatomic) NSString *signature;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
