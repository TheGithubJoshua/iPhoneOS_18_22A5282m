@class UIFont, NSString, UIColor, UIImageView, UIView, NSAttributedString, UILabel;

@interface SFURLLabel : UIVisualEffectView {
    double _fadeOutDistance;
    UILabel *_label;
    UIImageView *_fadeOut;
    BOOL _needsUpdateSize;
    struct { UILabel *label; long long transitionCount; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousLabelFrame; } _textSizeTransitionContext;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) struct CGSize { double width; double height; } urlSize;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) double lastLineBaselineFrameOriginY;
@property (nonatomic) long long textAlignmentEdge;
@property (nonatomic) long long fadeOutEdge;
@property (weak, nonatomic) UIView *URLContainerClipView;
@property (readonly, nonatomic) double labelCapHeightInsetFromTop;
@property (readonly, nonatomic) BOOL isAnimatingTextSize;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setNeedsUpdateSize;
- (void)_updateSize;
- (void)beginTextSizeAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityLabel;
- (void)endTextSizeAnimation;
- (void).cxx_destruct;
- (void)_updateSizeIfNeeded;
- (BOOL)_needsMask;
- (void)_updateMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unclippedContentRect;
- (void)layoutSubviews;
- (id)initWithFadeOutDistance:(double)a0;

@end
