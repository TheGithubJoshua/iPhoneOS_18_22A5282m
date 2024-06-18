@class UIFont, NSString, NSArray, UIImage, NSLayoutConstraint, UIImageView, UIButton, UITextField, SFFaviconView, SFUnifiedTabBarItemTitleContainerViewTheme, SFURLLabel, UILabel;

@interface SFUnifiedTabBarItemTitleContainerView : UIView {
    SFFaviconView *_iconView;
    SFURLLabel *_titleLabel;
    UIImageView *_lockView;
    UIImageView *_squishedIconView;
    UIImageView *_squishedLockView;
    SFURLLabel *_leadingAnnotationLabel;
    UILabel *_trailingAnnotationLabel;
    UILabel *_availabilityLabel;
    NSLayoutConstraint *_availabilityLabelAlignmentConstraint;
    double _offsetOfTitleInSearchField;
    UIButton *_fakeClearButton;
    double _iconSpacing;
    BOOL _titleLanguageIsRightToLeft;
}

@property (readonly, nonatomic) NSArray *_arrangedViews;
@property (readonly, nonatomic) NSArray *_arrangedViewsByContentCompressionResistancePriority;
@property (nonatomic, setter=_setShowsFakeClearButton:) BOOL _showsFakeClearButton;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL showsIcon;
@property (nonatomic) double iconAlpha;
@property (copy, nonatomic) NSString *titleWhenCollapsed;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *textWhenExpanded;
@property (nonatomic) unsigned long long startIndexOfTitleInTextWhenExpanded;
@property (retain, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (nonatomic) BOOL showsSearchIcon;
@property (nonatomic) BOOL showsLockIcon;
@property (nonatomic) BOOL showsPrivateAnnotation;
@property (nonatomic) BOOL hasFocusedSensitiveInputField;
@property (nonatomic) long long securityAnnotation;
@property (nonatomic) long long lockIconEdge;
@property (nonatomic) BOOL animateLockViewPosition;
@property (nonatomic) BOOL usesInsetFromLayoutMargins;
@property (nonatomic, getter=isAnimatingResize) BOOL animatingResize;
@property (readonly, nonatomic, getter=isNarrow) BOOL narrow;
@property (nonatomic) double spacing;
@property (nonatomic) double titleToSearchIconSpacing;
@property (nonatomic) double contentOffset;
@property (nonatomic) BOOL hidesIconForHover;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconFrame;
@property (retain, nonatomic) UITextField *searchField;
@property (nonatomic) BOOL showsSearchField;
@property (nonatomic) BOOL suppressesText;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (retain, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *theme;
@property (nonatomic) BOOL dimsText;
@property (readonly, nonatomic) double minimumWidthToShowTitle;
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) BOOL showsSquishedAccessoryViews;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL leadingAlignsIcon;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } lockSize;
@property (readonly, nonatomic) double maximumIconWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } urlSize;

- (id)_titleFont;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutMarginsDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveDirectionalLayoutMargins;
- (BOOL)_shouldSlideArrangedViewForSearchField:(id)a0;
- (double)urlCapHeightToTopBoundsDistanceForHeight:(double)a0;
- (void)beginTitleTextStyleAnimation;
- (BOOL)_shouldShowAvailabilityLabel;
- (void)_slideArrangedViewsForSearchField:(double)a0;
- (double)_collapsedWidthForView:(id)a0;
- (void)_updateTitleColor;
- (void)_updateSecurityAnnotation;
- (void)_updateSearchFieldColor;
- (void)presentAvailabilityLabelWithText:(id)a0;
- (void)_updateTitle;
- (void)dismissAvailabilityLabelAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_layOutSearchField;
- (void)beginTransitioningSearchField;
- (id)initWithAlignment:(long long)a0;
- (struct CGSize { double x0; double x1; })_preferredSizeForView:(id)a0;
- (double)_spacingBetweenView:(id)a0 nextView:(id)a1;
- (id)_lastVisibleViewInViews:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_layoutSquishedAccessoryViews;
- (void)_updateIconSpacing;
- (void)_updateAlignmentForAvailabilityLabel:(id)a0;
- (id)_placeholderText;
- (void).cxx_destruct;
- (void)_leadingAlignCenteredIconIfNeeded;
- (void)_updateSquishedAccessorySymbolConfigurations;
- (void)_layoutArrangedViews;
- (void)endTitleTextStyleAnimation;
- (void)_layOutFakeClearButtonUsingPresentationFrame:(BOOL)a0;
- (void)_updateOffsetOfTitleInSearchField;
- (void)_updateTitleFont;
- (void)endTransitioningSearchField;
- (BOOL)_showsView:(id)a0;
- (void)_layoutSquishedAccessoryView:(id)a0 forView:(id)a1;
- (id)_squishedIconView;
- (id)_squishedLockView;
- (id)_squishedAccessorySymbolConfiguration;
- (void)layoutSubviews;
- (double)_alphaForView:(id)a0;
- (BOOL)_viewCollapsesWhenHidden:(id)a0;
- (BOOL)_showsPlaceholder;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveLayoutMargins;
- (void)_updateIcon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_searchFieldFrame;
- (void)_updateSecurityAnnotationAnimated:(BOOL)a0;
- (double)urlBaselineToBottomBoundsDistanceForHeight:(double)a0;

@end