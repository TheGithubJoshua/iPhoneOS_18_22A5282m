@interface PXFocusableUIImageView : UIImageView

@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) BOOL drawsFocusRing;
@property (nonatomic) BOOL reusable;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)canBecomeFocused;
- (id)focusEffect;

@end
