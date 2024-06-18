@class UIImageView, UIVisualEffectView;

@interface SFCloseButton : UIButton {
    UIImageView *_imageView;
    UIVisualEffectView *_blurEffectView;
}

@property (readonly, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)a0 primaryAction:(id)a1;

@end
