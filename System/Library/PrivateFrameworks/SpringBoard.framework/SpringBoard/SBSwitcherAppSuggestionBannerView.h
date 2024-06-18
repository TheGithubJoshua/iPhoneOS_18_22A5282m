@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    BOOL _highlighted;
    UIView *_highlightDarkeningView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
@property (readonly, nonatomic) unsigned long long style;

- (id)_titleFont;
- (void)setHighlighted:(BOOL)a0;
- (id)_appTitleForSuggestion:(id)a0;
- (id)_meCardShortName;
- (id)_borderView;
- (void)_configureConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)_createIconViewForSuggestion:(id)a0;
- (id)_firstWakeGreetingString;
- (void).cxx_destruct;
- (id)_textStyle;
- (void)_updateAppearanceForCurrentUserInterfaceStyle;
- (id)_descriptionFont;
- (id)_iconImageFromAppWithBundleIdentifier:(id)a0 withIconImageCache:(id)a1;
- (void)_createDarkeningView;
- (id)_descriptionStringForSuggestion:(id)a0;
- (BOOL)_isSingleLine;
- (void)_createDescriptionLabelForSuggestion:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appSuggestion:(id)a1 style:(unsigned long long)a2;
- (void)_createAppLabelForSuggestion:(id)a0;
- (id)initWithRecipe:(long long)a0;

@end
