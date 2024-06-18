@class NSString, HFCroppedWallpaperInfo;

@interface HFWallpaper : NSObject <NSCopying>

@property (copy, nonatomic) HFCroppedWallpaperInfo *cropInfo;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (retain, nonatomic) HFWallpaper *lastUserSelectedWallpaper;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL isCustomType;

+ (struct CGSize { double x0; double x1; })size;
+ (struct CGSize { double x0; double x1; })contentSizeForWallpaper;
+ (id)customWallpaperWithAssetIdentifier:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)wallpaperIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 assetIdentifier:(id)a1 cropInfo:(id)a2;
- (id)sliceIdentifierForVariant:(long long)a0;

@end
