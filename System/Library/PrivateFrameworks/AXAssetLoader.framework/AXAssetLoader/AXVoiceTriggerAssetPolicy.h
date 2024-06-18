@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy

+ (BOOL)_assetsUsedInLastSixMonths;
+ (BOOL)_soundSwitchesEnabled;

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)maxSupportedFormatVersion;

@end
