@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (id)initWithRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isInstalled;
- (id)vendorIdentifier;
- (id)attributeDescriptions;
- (id)hostApplicationInfo;

@end
