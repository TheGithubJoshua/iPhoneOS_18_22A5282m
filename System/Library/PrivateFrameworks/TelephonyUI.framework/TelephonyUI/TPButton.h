@class _UIBackdropView;

@interface TPButton : UIButton {
    int _color;
    _UIBackdropView *_backdropView;
}

@property (nonatomic) BOOL blursBackground;
@property (nonatomic) BOOL roundsCorners;
@property (nonatomic) BOOL usesOverlayBlendingForContents;

+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)a0;
+ (id)defaultStandardFont;
+ (double)defaultWidthForCenterButton;
+ (double)defaultWidthForSideButton;
+ (double)maxWidthForCenterButton;

- (void)setHighlighted:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)setButtonColor:(int)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (int)buttonColor;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithTitle:(id)a0 icon:(id)a1 color:(int)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (void)setDisabledButtonColor:(int)a0;
- (void)setIconVerticalOffset:(double)a0;
- (void)setMinimumTitleFontSize:(double)a0;
- (void)setMinimumTitleFontSize:(double)a0 maximumTitleFontSize:(double)a1;
- (void)setPlusSeparatedTitle:(id)a0;
- (void)setTitleImagePadding:(double)a0;
- (void)setTitleVerticalOffset:(double)a0;

@end
