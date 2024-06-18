@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (id)activityType;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)bundleIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;

@end
