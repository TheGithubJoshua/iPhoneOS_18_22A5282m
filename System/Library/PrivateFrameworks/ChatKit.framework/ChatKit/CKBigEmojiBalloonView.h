@interface CKBigEmojiBalloonView : CKTextBalloonView

- (void)clearFilters;
- (id)accessibilityIdentifier;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setImage:(id)a0;
- (void)setGradientReferenceView:(id)a0;
- (void)addFilter:(id)a0;
- (BOOL)hasBackground;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;

@end
