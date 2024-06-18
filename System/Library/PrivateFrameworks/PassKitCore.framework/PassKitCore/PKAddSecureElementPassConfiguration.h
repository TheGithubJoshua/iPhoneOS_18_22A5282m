@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configurationType;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredDataForProvisioning;

@end
