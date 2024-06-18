@class NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    LSBundleRecord *_containingBundleRecord;
    NSUUID *_UUID;
    NSString *_localizedName;
    NSURL *_url;
    NSURL *_containingURL;
    NSDictionary *_sdkDictionary;
    NSDictionary *_extensionDictionary;
    NSDictionary *_attributes;
    NSDictionary *_entitlements;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (unsigned char)userElection;
- (id)entitlements;
- (id)attributes;
- (unsigned int)platform;
- (id)url;
- (id)UUID;
- (id)sdkDictionary;
- (id)containingBundleRecord;
- (id)localizedName;
- (void).cxx_destruct;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (unsigned char)defaultUserElection;
- (id)containingURL;
- (id)bundleIdentifier;
- (id)extensionDictionary;

@end
