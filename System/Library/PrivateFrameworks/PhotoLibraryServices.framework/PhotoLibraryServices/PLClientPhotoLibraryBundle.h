@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (id)newChangePublisher;
- (void)resetClientSandboxExtensionCache;
- (id)clientSandboxExtensionCache;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (id)newLibraryServicesManager;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (void)_initClientSandboxExtensionCache;
- (void)_invalidateClientSandboxExtensionCache;
- (void).cxx_destruct;
- (id)newBoundAssetsdServicesTable;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (void)close;

@end
