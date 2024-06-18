@class UIView, UIImage, NSArray, CSBatteryFillView, UIImageView, _UIBackdropView, NSLayoutConstraint, SBUILegibilityLabel;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    CSBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
    struct CGSize { double width; double height; } _batteryImageSize;
    UIImage *_boltImage;
    UIImageView *_boltImageView;
}

@property (nonatomic) struct CGSize { double width; double height; } batterySize;
@property (nonatomic) BOOL horizontalLayoutNeeded;
@property (nonatomic) BOOL includesBoltImage;

- (double)_batteryNoseOffset;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_layoutChargePercentLabel;
- (void).cxx_destruct;
- (void)setBatteryVisible:(BOOL)a0;
- (id)_chargePercentFont;
- (void)_layoutBattery;
- (long long)batteryCount;
- (double)desiredVisibilityDuration;
- (void)layoutSubviews;
- (BOOL)batteryVisible;
- (void)setLegibilitySettings:(id)a0;

@end
