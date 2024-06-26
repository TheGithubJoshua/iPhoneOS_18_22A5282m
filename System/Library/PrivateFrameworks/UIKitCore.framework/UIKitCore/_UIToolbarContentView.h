@class _UIBarButtonItemData, NSMapTable, _UIButtonBar, _UIPointerInteractionAssistant, NSLayoutConstraint;

@interface _UIToolbarContentView : _UIBarContentView {
    _UIButtonBar *_buttonBar;
    _UIPointerInteractionAssistant *_assistant;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } padding;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) BOOL compactMetrics;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;

- (void)_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_appearanceChanged;
- (void)layoutMarginsDidChange;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_directionalSafeArea;
- (void)_setButtonBarLeadingInset:(double)a0 trailingInset:(double)a1;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (double)absorptionForItem:(id)a0;
- (double)defaultEdgeSpacing;
- (void)updateConstraints;
- (void)updateContent;
- (double)defaultTextPadding;
- (long long)barType;
- (unsigned long long)edgesPaddingBarButtonItem:(id)a0;
- (id)_computeEdgeAbsorptionForItems:(id)a0;
- (void).cxx_destruct;
- (void)reloadWithItems:(id)a0;
- (void)_updateThreeUpFlagsForItems:(id)a0;
- (void)_ensureButtonBar;
- (void)tintColorDidChange;

@end
