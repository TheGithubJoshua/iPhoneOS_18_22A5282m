@class UIView;

@interface HURemoteContextHostingView : UIView

@property (readonly, nonatomic) UIView *destinationOutContainerView;
@property (readonly, nonatomic) UIView *destinationOutView;
@property (readonly, nonatomic) UIView *destinationOverView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long maskedCorners;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithContentView:(id)a0;
- (void)_setCornerRadius:(double)a0;
- (double)_cornerRadius;
- (double)_continuousCornerRadius;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;

@end
