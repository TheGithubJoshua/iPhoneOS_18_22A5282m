@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults;
@property (nonatomic) double downloadDelayOverride;

- (id)init;
- (long long)downloadedAssetDiskUsageInBytes;
- (id)_compatibilityVersionQueryParameters;
- (double)_downloadDelay;
- (id)_assetsGroupedByUniqueNameAndType:(id)a0;
- (void)_downloadAssets:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithMobileAssetDownloadManager:(id)a0;
- (long long)purgeAllDownloadedAssets;
- (void).cxx_destruct;
- (void)_downloadRemoteCatalogAndAssets;
- (BOOL)_assetIsInstalled:(id)a0;
- (void)_downloadRemoteAssets:(id)a0 installedAssets:(id)a1;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)a0 completion:(id /* block */)a1;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)a0;
- (void)_processAssets:(id)a0 completion:(id /* block */)a1;
- (void)downloadRemoteCatalog;
- (void)availableAssetsWithCompletion:(id /* block */)a0;
- (void)_removeAssets:(id)a0;

@end
