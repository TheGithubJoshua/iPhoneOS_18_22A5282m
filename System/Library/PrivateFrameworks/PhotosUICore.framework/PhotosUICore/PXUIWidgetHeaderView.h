@class UIColor, NSArray, UIVisualEffectView, NSString, UILabel, UIFont, UIButton;
@protocol PXUIWidgetHeaderViewDelegate;

@interface PXUIWidgetHeaderView : UIView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL hasContent; BOOL title; BOOL subtitle; BOOL caption; } _needsUpdateFlags;
    struct { BOOL didSelectSubtitle; BOOL didSelectCaption; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setHasContent:) BOOL _hasContent;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, setter=_setCurrentHeight:) double _currentHeight;
@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_subtitleLabel;
@property (readonly, nonatomic) UIButton *_subtitleButton;
@property (readonly, nonatomic) UILabel *_captionLabel;
@property (readonly, nonatomic) UIButton *_captionButton;
@property (readonly, nonatomic) UIVisualEffectView *_visualEffectView;
@property (weak, nonatomic) id<PXUIWidgetHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic) BOOL allowUserInteractionWithCaption;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;
@property (nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;

- (void)_invalidateTitle;
- (void)_updateTitleIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_invalidateSubtitle;
- (void)layoutSubviews;
- (BOOL)_hasAccessibilityLargeText;
- (BOOL)_canComposeTitleWithSubtitle;
- (id)_captionButtonCreateIfNeeded:(BOOL)a0;
- (id)_captionLabelCreateIfNeeded:(BOOL)a0;
- (void)_handleCaptionButton:(id)a0;
- (void)_handleSubtitleButton:(id)a0;
- (BOOL)_hasSubtitle;
- (void)_invalidateCaption;
- (void)_invalidateHasContent;
- (id)_subtitleButtonCreateIfNeeded:(BOOL)a0;
- (id)_subtitleLabelCreateIfNeeded:(BOOL)a0;
- (id)_titleLabelCreateIfNeeded:(BOOL)a0;
- (void)_updateCaptionIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateSubtitleIfNeeded;
- (id)_visualEffectViewCreateIfNeeded:(BOOL)a0;

@end
