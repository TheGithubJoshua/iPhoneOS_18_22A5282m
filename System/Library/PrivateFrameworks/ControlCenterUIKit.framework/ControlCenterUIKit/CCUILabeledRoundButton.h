@class NSString, UIImage, NSArray, CCUICAPackageDescription, NSMutableDictionary, CCUIRoundButton, UILabel, UIColor;

@interface CCUILabeledRoundButton : UIView <MTVisualStylingRequiring> {
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *highlightTintColor;
@property (retain, nonatomic) CCUIRoundButton *buttonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL labelsVisible;
@property (nonatomic) BOOL useAlternateBackground;
@property (nonatomic) NSString *contentSizeCategoryThreshold;
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2 useLightStyle:(BOOL)a3;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (void)_contentSizeCategoryDidChange;
- (void)_layoutLabels;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2;
- (void)_updateFonts;
- (void)buttonTapped:(id)a0;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void)_setupLabelsBounds;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shouldUseLargeTextLayout;
- (id)initWithHighlightColor:(id)a0 useLightStyle:(BOOL)a1;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingVisualStylingProvider:(id)a2;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)layoutSubviews;

@end
