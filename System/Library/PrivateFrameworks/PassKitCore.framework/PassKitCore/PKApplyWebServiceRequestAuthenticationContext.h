@class NSArray, NSData;

@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSData *signaturePayload;
@property (copy, nonatomic) NSData *signature;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
