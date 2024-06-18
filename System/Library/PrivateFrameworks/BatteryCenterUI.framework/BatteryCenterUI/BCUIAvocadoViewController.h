@class NSArray, NSMutableArray, NSString;

@interface BCUIAvocadoViewController : UIViewController {
    BOOL _batteryDeviceViewsValid;
    NSMutableArray *_batteryDeviceViews;
}

@property (readonly, copy, nonatomic, getter=_batteryDeviceViews) NSMutableArray *batteryDeviceViews;
@property (readonly, nonatomic, getter=_maximumNumberOfBatteryDeviceViews) unsigned long long maximumNumberOfBatteryDeviceViews;
@property (readonly, nonatomic, getter=_includeEmptyDevices) BOOL includeEmptyDevices;
@property (copy, nonatomic) NSArray *batteryDevices;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (void)initialize;
+ (id)avocadoViewControllerForWidgetFamily:(long long)a0;

- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;
- (BOOL)_canShowWhileLocked;
- (id)_synthesizedDebugIdentifier;
- (id)_newBatteryDeviceView;
- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andMaxNumViews:(double)a1;
- (void)_validateBatteryDeviceViewsIfNecessary;
- (void)invalidateBatteryDeviceState;

@end
