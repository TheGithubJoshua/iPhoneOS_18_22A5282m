@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying>

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL excludeLiveness;
@property (nonatomic) BOOL excludeLocation;
@property (nonatomic) BOOL excludeCaption;
@property (nonatomic) BOOL excludeAccessibilityDescription;

+ (id)itemsForAssets:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)localIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;
- (BOOL)isEqualToActivityAssetItem:(id)a0;

@end
