@class UIVisualEffectView, UIImageView, UILabel, SFMagicHeadCircleView;

@interface SFMagicHeadPlaceholderView : UIView {
    UIVisualEffectView *_backgroundVisualEffectView;
    SFMagicHeadCircleView *_backgroundView;
    UIVisualEffectView *_contentVisualEffectView;
    UILabel *_label;
    UIImageView *_imageView;
    BOOL _useNoUWBCapableLabel;
    BOOL _useRaiseLabel;
    BOOL _titledTooFarColor;
    BOOL _canShowArrow;
}

- (double)alpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTiltedTooFarColor:(BOOL)a0 useRaiseLabel:(BOOL)a1 useNoUWBCapableLabel:(BOOL)a2;
- (void)updateForCurrentState;

@end
