@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)_donateTipsAppEnablementSignal;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (void)enableCPL:(id /* block */)a0;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (void)disableCPL:(id /* block */)a0;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldHandleOptimizeModeChange;

@end
