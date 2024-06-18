@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (id)description;
+ (Class)classForKeyedUnarchiver;

- (id)localizedShortName;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)entitlements;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)supportedIntents;
- (BOOL)isFreeProfileValidated;
- (id)executableURL;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)machOUUIDs;
- (unsigned int)platform;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)signerOrganization;
- (BOOL)conformsToProtocol:(id)a0;
- (id)URL;
- (char)developerType;
- (void)detach;
- (id)dataContainerURL;
- (id)teamIdentifier;
- (id)managedPersonas;
- (Class)classForKeyedArchiver;
- (void)forwardInvocation:(id)a0;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (Class)classForCoder;
- (id)accentColorName;
- (BOOL)isUPPValidated;
- (unsigned long long)hash;
- (id)SDKVersion;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (BOOL)isProfileValidated;
- (id)replacementObjectForCoder:(id)a0;
- (id)signerIdentity;
- (id)_loadRealRecord;
- (void)encodeWithCoder:(id)a0;
- (id)applicationIdentifier;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)supportedIntentMediaCategories;
- (id)intentDefinitionURLs;
- (id)intentsRestrictedWhileLocked;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)WKBackgroundModes;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)serviceRecords;
- (id)bundleIdentifier;
- (id)UIBackgroundModes;
- (BOOL)supportsNowPlaying;

@end
