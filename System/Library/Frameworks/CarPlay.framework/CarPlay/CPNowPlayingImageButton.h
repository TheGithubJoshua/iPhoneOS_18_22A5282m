@class CPImageSet, UIImage;

@interface CPNowPlayingImageButton : CPNowPlayingButton

@property (retain, nonatomic) CPImageSet *imageSet;
@property (readonly, nonatomic) UIImage *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 handler:(id /* block */)a1;

@end
