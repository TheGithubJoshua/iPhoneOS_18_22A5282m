@class _UIBackdropView, UIImageView, CSBatteryFillView, UIView, SBUILegibilityLabel;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setSecondaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)setBatteryVisible:(BOOL)a0;
- (id)_chargePercentFont;
- (double)_chargingBoltTopOffset;
- (double)_deviceChargeBaselineOffset;
- (double)_deviceNameBaselineOffset;
- (double)_spaceBetweenBatteryImages;
- (long long)batteryCount;
- (double)_batteryTopPadding;
- (double)desiredVisibilityDuration;
- (void)layoutSubviews;
- (BOOL)batteryVisible;
- (void)setLegibilitySettings:(id)a0;

@end
