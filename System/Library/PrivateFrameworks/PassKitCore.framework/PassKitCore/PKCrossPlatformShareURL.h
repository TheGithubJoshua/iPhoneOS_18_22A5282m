@class NSURL, NSString;

@interface PKCrossPlatformShareURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *expectedPairedReaderIdentifier;
@property (readonly, nonatomic) NSString *expectedProvisioningCredentialHash;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToCrossPlatformShareURL:(id)a0;
- (id)initWithURL:(id)a0 expectedPairedReaderIdentifier:(id)a1 expectedProvisioningCredentialHash:(id)a2;

@end
