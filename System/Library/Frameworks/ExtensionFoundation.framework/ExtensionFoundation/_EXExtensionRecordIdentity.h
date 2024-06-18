@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (id)extensionSettingsKey;
- (unsigned char)userElection;
- (id)entitlements;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)attributes;
- (unsigned int)platform;
- (id)url;
- (Class)classForCoder;
- (id)UUID;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)sdkDictionary;
- (id)containingBundleRecord;
- (id)localizedName;
- (void).cxx_destruct;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (unsigned char)defaultUserElection;
- (id)containingURL;
- (id)bundleIdentifier;
- (BOOL)setUserElection:(unsigned char)a0 error:(id *)a1;
- (id)extensionDictionary;

@end
