@class HFWallpaper, UIImage;

@interface HFWallpaperEditCollection : NSObject

@property (readonly, nonatomic) HFWallpaper *wallpaper;
@property (readonly, nonatomic) UIImage *originalImage;
@property (readonly, nonatomic) UIImage *processedImage;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaper:(id)a0 originalImage:(id)a1 processedImage:(id)a2;

@end
