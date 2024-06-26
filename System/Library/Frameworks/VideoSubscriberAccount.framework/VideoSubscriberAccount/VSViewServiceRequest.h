@class VSOptional, NSString, NSArray, VSAccountMetadataRequest;

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VSOptional *requestingAppDisplayName;
@property (retain, nonatomic) NSString *requestingAppAdamID;
@property (readonly, nonatomic, getter=isPreAuthRequest) BOOL preAuthRequest;
@property (nonatomic) BOOL allowsPrivacyUI;
@property (nonatomic) BOOL requiresPrivacyUI;
@property (nonatomic) BOOL canVetoAuthentication;
@property (copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest;
@property (readonly, nonatomic) BOOL allowsAuthenticationUI;
@property (readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property (readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property (readonly, copy, nonatomic) NSArray *applicationAccountProviders;
@property (nonatomic) BOOL shouldInferFeaturedProviders;
@property (nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
@property (readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property (readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property (readonly, copy, nonatomic) NSString *accountProviderAuthenticationToken;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
