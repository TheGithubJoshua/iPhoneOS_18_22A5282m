@class DBIconLabelBackdropView, UIView, DBEnvironmentConfiguration, DBIconDropShadowProvider;

@interface DBIconView : SBIconView

@property (class, retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

@property (retain, nonatomic) DBIconDropShadowProvider *dropShadowProvider;
@property (retain, nonatomic) UIView *dropShadowView;
@property (retain, nonatomic) DBIconLabelBackdropView *labelLegibilityView;
@property (nonatomic) BOOL shadowHidden;

+ (id)textColorForTraitCollection:(id)a0;
+ (id)labelFontForTraitCollection:(id)a0;
+ (BOOL)supportsPreviewInteraction;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsDragInteraction;
+ (BOOL)supportsCursorInteraction;
+ (void)_updateCharacteristicsWithTraitCollection:(id)a0;
+ (id)focusTextColorForTraitCollection:(id)a0;
+ (double)_labelHeight;
+ (BOOL)allowsLabelAccessoryView;
+ (id)focusColorForTraitCollection:(id)a0;
+ (id)defaultIconLocation;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })minimumInterIconSpacing;
+ (BOOL)_iconLabelsRequireBackground;
+ (double)maximumIconViewHeightForIconImageSize:(struct CGSize { double x0; double x1; })a0;

- (double)_labelBaselineOffsetFromImage;
- (void)_updateLabel;
- (void)_wallpaperChanged:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setLabelHidden:(BOOL)a0;
- (void)_configureIconImageView:(id)a0;
- (void)_refreshDropShadowWithIconImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelHighlight;
- (void)traitCollectionDidChange:(id)a0;
- (void)configureLabelImageParametersBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)initWithConfigurationOptions:(unsigned long long)a0 listLayoutProvider:(id)a1;
- (id)labelFont;
- (void)layoutSubviews;

@end
