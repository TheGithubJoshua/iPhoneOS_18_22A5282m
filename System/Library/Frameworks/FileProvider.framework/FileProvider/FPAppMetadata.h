@class NSString, NSURL;

@interface FPAppMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useDefaultProviderDomainID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (readonly, nonatomic) BOOL isManaged;

+ (BOOL)_isContainerIDPermitted:(id)a0;
+ (id)_entitledUbiquityContainerIDForAppProxy:(id)a0;
+ (id)_localizedCustomDisplayNameForAppProxy:(id)a0;
+ (id)_entitledCloudDocsContainerIDForAppProxy:(id)a0;
+ (id)findBundleIDForCurrentPlatformInSet:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppProxy:(id)a0 providerDomainID:(id)a1;

@end
