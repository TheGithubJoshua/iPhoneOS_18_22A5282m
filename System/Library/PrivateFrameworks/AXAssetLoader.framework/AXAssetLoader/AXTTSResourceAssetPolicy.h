@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)compatibilityVersion;
- (id)assetType;
- (id)launchActivityIdentifier;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (id)_voiceIdentifierForAsset:(id)a0;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
