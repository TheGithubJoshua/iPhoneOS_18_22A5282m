@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)_assetsUsedInLastSixMonths;
- (BOOL)shouldCopyLocally;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)maxSupportedFormatVersion;

@end
