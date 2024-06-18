@class _UIToolbarContentView, NSString, _UIBarBackgroundLayout, UIView, _UIBarBackground;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    long long _itemDistribution;
    BOOL _useModernAppearance;
    double _backgroundTransitionProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_itemDidChangeWidth:(id)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)updateBarBackgroundSize;
- (void)_updateContentView;
- (void)setCustomBackgroundView:(id)a0;
- (long long)itemDistribution;
- (void)updateBarForStyle:(long long)a0;
- (void)updateBackgroundGroupName;
- (void)updateArchivedSubviews:(id)a0;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (id)appearanceObserver;
- (BOOL)toolbarIsSmall;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (id)currentBackgroundView;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (void)setBackgroundTransitionProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (void)setItemDistribution:(long long)a0;
- (void)setUseModernAppearance:(BOOL)a0;
- (void)updateBarBackground;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (double)backgroundTransitionProgress;
- (void)updateAppearance;
- (id)_currentCustomBackground;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)a0 withOldItems:(id)a1 animated:(BOOL)a2;
- (void)_updateBackgroundModern;
- (BOOL)useModernAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (void)_itemDidChangeHiddenState:(id)a0;
- (void).cxx_destruct;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (void)_updateBackgroundLegacyForPosition:(long long)a0;
- (void)_itemDidChangeEnabledState:(id)a0;
- (void)layoutSubviews;
- (void)prepare;

@end
