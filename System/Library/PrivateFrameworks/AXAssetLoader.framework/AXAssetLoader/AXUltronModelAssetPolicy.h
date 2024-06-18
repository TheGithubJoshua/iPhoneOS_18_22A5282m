@interface AXUltronModelAssetPolicy : AXAssetPolicy

+ (long long)minimumCompatibilityVersion;
+ (id)ultronAssetType;
+ (id)assetsToDownloadFromAssets:(id)a0;
+ (id)compatibleAssetsFromRefreshedAssets:(id)a0;
+ (id)newestCompatiableAssetsFromAssets:(id)a0;
+ (long long)maximumCompatibilityVersion;
+ (BOOL)_isUltronAssetCompatible:(id)a0;

- (id)assetType;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (BOOL)_assetUsedRecently;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
