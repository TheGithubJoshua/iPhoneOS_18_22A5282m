@class NSString, UIImageView, _UIStatusBarCellularSignalView, NSLayoutConstraint, UIAccessibilityHUDItem;

@interface _UIStatusBarEmergencySignalView : UIView <_UIStatusBarDisplayable>

@property (nonatomic) BOOL rounded;
@property (nonatomic) long long iconSize;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (readonly) UIImageView *sosView;
@property (readonly) _UIStatusBarCellularSignalView *signalView;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_interspaceForIconSize:(long long)a0;
+ (double)_fontSizeForIconSize:(long long)a0;

- (void)_iconSizeDidChange;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)applyStyleAttributes:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
