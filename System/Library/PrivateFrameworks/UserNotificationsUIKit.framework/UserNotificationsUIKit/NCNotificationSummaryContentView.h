@class NSDate, NSString, NSArray, UIView, NSStringDrawingContext, UIImageView, MTVisualStylingProvider, UILabel;
@protocol BSUIDateLabel;

@interface NCNotificationSummaryContentView : UIView <BSUIDateLabelDelegate, NCNotificationSummaryContentDisplaying> {
    UILabel *_summaryTitleLabel;
    UILabel *_summaryLabel;
    UIView *_summaryIconsContainerView;
    NSArray *_iconViews;
    UIImageView *_summaryIconSymbolImageView;
    UIView *_summaryIconSymbolBackgroundView;
    UILabel<BSUIDateLabel> *_summaryDateLabel;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
}

@property (nonatomic) double horizontalLeadingMargin;
@property (nonatomic) double horizontalTrailingMargin;
@property (nonatomic, getter=isSummaryLabelMaterialSecondary) BOOL summaryLabelMaterialSecondary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) NSArray *summaryIconViews;
@property (nonatomic, getter=isIconViewLeading) BOOL iconViewLeading;
@property (copy, nonatomic) NSString *summaryTitleFontName;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryIconSymbolName;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (id)_dateLabelPreferredFont;
- (void)_recycleDateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextAttributesForDateLabel;
- (void)_updateTextAttributes;
- (id)_dateLabelFont;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)dateLabelDidChange:(id)a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_addShadowForIconView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedRectForLabelLayoutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_dateFormatStyleForDate:(id)a0;
- (void)_layoutSummaryDateLabel;
- (void)_layoutSummaryIconsView;
- (void)_layoutSummaryLabel;
- (void)_layoutSummaryTitleLabel;
- (unsigned long long)_maximumNumberOfLinesForSummaryText;
- (unsigned long long)_maximumNumberOfLinesForSummaryTitleText;
- (unsigned long long)_numberOfLinesForSummaryTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForSummaryTitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_tearDownDateLabelIfNecessary;
- (void)_updateTextAttributesForSummaryLabel;
- (void)_updateTextAttributesForSummaryTitleLabel;
- (void)_updateVisualStylingProvidersForIconViewIfNecessary:(id)a0;
- (void)_updateVisualStylingProvidersForIconViewsIfNecessary;
- (double)_widthForIconsContainerView;

@end
