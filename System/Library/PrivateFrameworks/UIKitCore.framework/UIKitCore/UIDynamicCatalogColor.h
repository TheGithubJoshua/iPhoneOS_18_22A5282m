@class NSString, _UIAssetManager, UIColor;

@interface UIDynamicCatalogColor : UIDynamicColor {
    NSString *_name;
    _UIAssetManager *_assetManager;
    UIColor *_genericColor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 assetManager:(id)a1 genericColor:(id)a2;
- (id)_initForNibEncodingWithName:(id)a0 genericColor:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_setDebugName:(id)a0;
- (id)_debugName;
- (id)_debugCatalogBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDebugCatalogBundleIdentifier:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;

@end
