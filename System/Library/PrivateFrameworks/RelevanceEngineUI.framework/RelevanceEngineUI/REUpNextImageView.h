@class UIColor, UIImage, UIImageView;

@interface REUpNextImageView : UIView {
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (retain, nonatomic) UIImage *overrideImage;

- (void)_updateColors;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_hasMultipartImages;

@end
