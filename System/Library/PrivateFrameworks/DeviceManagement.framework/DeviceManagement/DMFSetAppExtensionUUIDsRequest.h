@class NSString;

@interface DMFSetAppExtensionUUIDsRequest : DMFAppRequest

@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSString *contentFilterUUIDString;
@property (copy, nonatomic) NSString *DNSProxyUUIDString;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
