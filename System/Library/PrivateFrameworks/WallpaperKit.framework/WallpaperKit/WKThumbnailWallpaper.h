@class NSURL, UIImage;

@interface WKThumbnailWallpaper : WKAbstractWallpaper

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (retain, nonatomic) UIImage *_thumbnailImage;

+ (id)na_identity;

- (id)thumbnailImage;
- (id /* block */)descriptionBuilderBlock;
- (BOOL)supportsCopying;
- (BOOL)supportsSerialization;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyListRepresentation;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(unsigned long long)a2 representedType:(unsigned long long)a3 backingType:(unsigned long long)a4 thumbnailImageURL:(id)a5;

@end
