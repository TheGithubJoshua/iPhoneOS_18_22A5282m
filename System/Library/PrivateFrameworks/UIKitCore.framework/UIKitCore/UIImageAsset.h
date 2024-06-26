@class UITraitCollection, NSString, NSBundle, CUINamedLayerStack, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSBundle *_containingBundle;
    struct { unsigned char hasRegisteredImages : 1; unsigned char supportsBlockGeneration : 1; } _assetFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ creationBlock;
@property (weak, nonatomic, setter=_setUnpinObserver:) id _unpinObserver;
@property (copy, nonatomic) NSString *assetName;
@property (weak) _UIAssetManager *_assetManager;
@property (readonly, nonatomic) UITraitCollection *_defaultTraitCollection;
@property (copy, nonatomic, setter=_setRebuildStackImage:) id /* block */ _rebuildStackImage;
@property (retain, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack;

+ (id)_dynamicAssetNamed:(id)a0 generator:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (void)_unregisterImageWithDescription:(id)a0;
- (id)init;
- (id)_symbolConfiguration;
- (void)_registerImage:(id)a0 withConfiguration:(id)a1;
- (id)_withLock_updateAssetFromBlockGenerationWithConfiguration:(id)a0 resolvedCatalogImage:(id)a1;
- (id)_withLock_mutableCatalog;
- (void)registerImage:(id)a0 withConfiguration:(id)a1;
- (void)_disconnectFromAssetManager;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (void)registerImage:(id)a0 withTraitCollection:(id)a1;
- (id)_unsafe_mutableCatalog;
- (id)imageWithTraitCollection:(id)a0;
- (void)_cacheRendition:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 tintColor:(id)a2 traitCollection:(id)a3 bold:(BOOL)a4 letterpress:(BOOL)a5 drawMode:(unsigned int)a6;
- (id)_initWithAssetName:(id)a0 forManager:(id)a1;
- (void)_withLock_unregisterImageWithDescription:(id)a0;
- (void)_unsafe_registerImage:(id)a0 withConfiguration:(id)a1;
- (unsigned long long)hash;
- (BOOL)_containsImagesInPath:(id)a0;
- (void)_withLock_registerImage:(id)a0 withConfiguration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_withLock_lookUpRegisteredObjectForTraitCollection:(id)a0 withAccessorWithAppearanceName:(id /* block */)a1;
- (id)_renditionCache:(BOOL)a0;
- (void)unregisterImageWithConfiguration:(id)a0;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1;
- (id)imageWithConfiguration:(id)a0;
- (id)_withLock_registeredAppearanceNames;
- (void)dealloc;
- (id)_cachedRenditionWithSize:(struct CGSize { double x0; double x1; })a0 tintColor:(id)a1 traitCollection:(id)a2 bold:(BOOL)a3 letterpress:(BOOL)a4 drawMode:(unsigned int)a5;
- (void)unregisterImageWithTraitCollection:(id)a0;
- (id)_withLock_imageWithConfiguration:(id)a0;
- (void)_clearResolvedImageResources;

@end
