@interface ZoomUI_SBFluidSwitcherScreenEdgePanGestureRecognizer : __ZoomUI_SBFluidSwitcherScreenEdgePanGestureRecognizer_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPortaitPointToSBOrientation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertSBPointToPortaitOrientation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_viewOrientationDoesNotMatchSBOrientation:(id)a0;

@end
