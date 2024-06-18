@class NSString, UILabel, BSUIFontProvider, MTMaterialView;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    BSUIFontProvider *_fontProvider;
    struct CGSize { double width; double height; } _size;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })_size;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateTitleLabelFont;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_fontProvider;
- (void)_configureTitleLabelIfNecessary;
- (void)_setBackgroundViewCornerRadius:(double)a0;
- (void)_configureBackgroundViewIfNecessary;
- (void)_layoutTitleLabel;
- (void)_updateHighlight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)invalidateCachedGeometry;
- (double)_backgroundViewCornerRadius;
- (void)_updateTouchInsetsIfNecessary;
- (id)fontForTitle:(id)a0;
- (void)layoutSubviews;
- (void)_configureMaskIfNecessary;

@end
