@class BSUIEmojiLabelView, NSString, CCUIMenuModuleItem, UIView, MTVisualStylingProvider;

@interface CCUIMenuModuleItemView : UIControl <UIPointerInteractionDelegate> {
    BSUIEmojiLabelView *_titleLabel;
    BSUIEmojiLabelView *_subtitleLabel;
    UIView *_separatorView;
    UIView *_highlightedBackgroundView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) BOOL separatorVisible;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL useTallLayout;
@property (nonatomic) BOOL useTrailingCheckmarkLayout;
@property (nonatomic) BOOL useTrailingInset;
@property (nonatomic) unsigned long long indentation;
@property (retain, nonatomic) CCUIMenuModuleItem *menuItem;
@property (retain, nonatomic) UIView *leadingView;
@property (retain, nonatomic) UIView *trailingView;
@property (nonatomic) BOOL shouldLimitContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFontForContentSizeCategory:(id)a0;
+ (BOOL)_shouldLimitContentSizeCategory:(id)a0 forceLimitContentSizeCategory:(BOOL)a1;
+ (id)_subtitleFontForContentSizeCategory:(id)a0 shouldLimitContentSizeCategory:(BOOL)a1;
+ (double)defaultMenuItemHeightForContentSizeCategory:(id)a0;
+ (id)_titleFontForContentSizeCategory:(id)a0 shouldLimitContentSizeCategory:(BOOL)a1;
+ (id)_subtitleFontForContentSizeCategory:(id)a0;
+ (id)_preferredFontForTextStyle:(id)a0 hiFontStyle:(long long)a1 contentSizeCategory:(id)a2 shouldLimitContentSizeCategory:(BOOL)a3;

- (id)_titleFont;
- (void)setHighlighted:(BOOL)a0;
- (void)_setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_shouldHorizontallyCenterText;
- (double)_separatorHeight;
- (id)_subtitleFont;
- (void)_layoutLeadingCustomView;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_contentSizeCategoryDidChange;
- (void)_updateForStateChange;
- (void)_layoutTrailingCustomViews;
- (void)setSelected:(BOOL)a0;
- (double)_labelLeadingInset;
- (double)_titleBaselineToTop;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_labelInsets;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)subtitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateVisualStyleOfView:(id)a0 withStyle:(long long)a1 recursivelyIfNeeded:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)didMoveToWindow;
- (id)initWithMenuItem:(id)a0;
- (double)_trailingWidthForCustomViews;
- (double)_textHeightForEmojiLabel:(id)a0 width:(double)a1;
- (void)_stopAutomaticallyUpdatingView:(id)a0 recursivelyIfNeeded:(BOOL)a1;
- (void)setEnabled:(BOOL)a0;
- (id)title;
- (void)layoutSubviews;
- (void)_setSubtitle:(id)a0;
- (void)updateSubviewsAlpha:(double)a0;
- (double)_titleBaselineToBottom;
- (void)_setContinuousCornerRadius:(double)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (double)_labelTrailingInset;

@end
