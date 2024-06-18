@class UIImage, SFImageContext, SFImage;

@interface SearchUIImage : SFImage

@property (retain) SFImageContext *lastLoadedContext;
@property (retain, nonatomic) UIImage *uiImage;
@property (retain, nonatomic) SFImage *sfImage;
@property (nonatomic) BOOL supportsFastPathShadow;
@property (nonatomic) BOOL needsTinting;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;
@property (readonly) double aspectRatio;

+ (id)imageWithSFImage:(id)a0;
+ (id)imageWithSFImage:(id)a0 variantForAppIcon:(unsigned long long)a1;

- (id)imageData;
- (BOOL)isTemplate;
- (id)initWithImage:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)scale;
- (double)cornerRadius;
- (struct CGSize { double x0; double x1; })size;
- (int)cornerRoundingStyle;
- (BOOL)shouldCropToCircle;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void)decodeImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithSFImage:(id)a0;
- (id)loadImageWithImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2;

@end
