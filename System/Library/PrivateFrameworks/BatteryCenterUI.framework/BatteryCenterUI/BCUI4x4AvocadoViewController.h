@interface BCUI4x4AvocadoViewController : BCUIAvocadoViewController

- (void)viewWillLayoutSubviews;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;
- (BOOL)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;

@end
