@class NSNumber, NSString, NSMutableDictionary;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *staticUsage;
@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;

+ (id)propertyQueue;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)_serverQueue;
+ (id)ODRConnection;
+ (id)mobileInstallationQueue;
+ (id)ODRUsageForBundleIdentifier:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)staticUsage;
- (BOOL)fetchClientSideWithError:(id *)a0;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dynamicUsage;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (id)debugDescription;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (id)onDemandResourcesUsage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllCachedUsageValues;
- (id)sharedUsage;

@end
