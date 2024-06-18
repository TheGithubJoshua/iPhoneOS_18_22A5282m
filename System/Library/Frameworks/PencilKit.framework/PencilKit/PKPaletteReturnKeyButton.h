@class PKPaletteReturnKeyButtonContentView, PKTextInputLanguageSelectionToken;

@interface PKPaletteReturnKeyButton : PKPaletteButton {
    double _scalingFactor;
}

@property (retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView;
@property (retain, nonatomic) PKTextInputLanguageSelectionToken *observerToken;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long axis;

- (void)setHighlighted:(BOOL)a0;
- (void)_updateImageView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)scalingFactor;
- (void)_updateLabelText;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateUI;
- (BOOL)_useCompactLayout;
- (void)setScalingFactor:(double)a0;
- (id)_returnKeyImage;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (id)_regularLayoutBackgroundColor;
- (id)_returnKeyImageSymbolConfiguration;
- (id)_returnKeyLabelText;
- (id)_returnKeyTintColor;
- (BOOL)_shouldUseBlueReturnKeyColor;
- (void)_updateContentViewOrientation;

@end
