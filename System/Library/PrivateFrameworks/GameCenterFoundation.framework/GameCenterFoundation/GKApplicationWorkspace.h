@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace;

+ (long long)getPlatformForBundleID:(id)a0;
+ (id)defaultWorkspace;

- (void)launchApplication:(id)a0;
- (void)openURL:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (void)openGameCenterSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (void)openICloudSettings;
- (void)openSettings;
- (BOOL)applicationIsInstalled:(id)a0;

@end
