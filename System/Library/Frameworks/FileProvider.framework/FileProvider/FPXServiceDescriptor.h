@class NSString;

@interface FPXServiceDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *requiredEntitlement;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end