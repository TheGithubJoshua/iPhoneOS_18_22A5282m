@interface _UIModernBarButton : UIButton <_UIButtonBarButtonAppearance> {
    BOOL _guardAgainstDegenerateBaselineCalculation;
}

@property (nonatomic, setter=_setGuardAgainstDegenerateBaselineCalculation:) BOOL _guardAgainstDegenerateBaselineCalculation;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _additionalSelectionInsets;

+ (Class)_visualProviderClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_supportsMacIdiom;
- (BOOL)_shouldAdjustToTraitCollection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (struct CGSize { double x0; double x1; })_roundSize:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_likelyToHaveTitle;

@end
