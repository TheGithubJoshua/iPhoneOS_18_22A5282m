@class AMSProcessInfo, NSString, AMSCoreOptionsBox, AMSMappedBundleInfo;

@interface AMSUserAgent : NSObject

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo;
@property (readonly, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, nonatomic) AMSCoreOptionsBox *optionsBox;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;

+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (id)userAgentForProcessInfo:(id)a0;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;

- (id)_iOSComponentClientInfo;
- (id)_sharedComponentFrameworkVersion;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (id)_iOSComponentProductVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;
- (id)_iOSComponentBuildVersion;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_userAgentSuffix;
- (void).cxx_destruct;
- (id)_iOSComponentHardwarePlatform;
- (id)compile;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;
- (id)initWithProcessInfo:(id)a0;
- (id)_iOSComponentDeviceModel;

@end
