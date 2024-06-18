@class NSString, NSURL, PHAsset, UIImage;

@interface WKPhotoAssetWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) PHAsset *_asset;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long representedType;
@property (readonly, nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

- (id)wallpaperValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhotoAsset:(id)a0;

@end
