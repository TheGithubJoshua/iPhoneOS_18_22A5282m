@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject {
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}

- (id)_assetManager;
- (void).cxx_destruct;
- (id)imageNamed:(id)a0;
- (id)initWithBundleURL:(id)a0;

@end
