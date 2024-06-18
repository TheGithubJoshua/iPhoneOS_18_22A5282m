@interface UIInputSetHostView : UIView

+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;
+ (BOOL)requiresConstraintBasedLayout;

- (unsigned long long)_clipCornersOfView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutIfNeeded;
- (int)textEffectsVisibilityLevel;
- (void)_updateSafeAreaInsets;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_didChangeKeyplaneWithContext:(id)a0;

@end
