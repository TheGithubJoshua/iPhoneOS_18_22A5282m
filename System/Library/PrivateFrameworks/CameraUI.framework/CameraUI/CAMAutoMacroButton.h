@class CAMSlashView, CAMSlashMaskView, UIImageView;

@interface CAMAutoMacroButton : UIButton

@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (nonatomic) BOOL active;
@property (nonatomic) long long orientation;

- (void)setHighlighted:(BOOL)a0;
- (id)_createCircleImageForContentSize:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateBackgroundImage;
- (void)_updateImage;
- (void)layoutSubviews;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)_updateTintColors;

@end
