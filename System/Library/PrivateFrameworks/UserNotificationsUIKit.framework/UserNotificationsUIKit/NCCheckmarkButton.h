@class UIImageView, UIView;

@interface NCCheckmarkButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_checkmarkImageView;
}

+ (id)button;

- (void)setSelected:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
