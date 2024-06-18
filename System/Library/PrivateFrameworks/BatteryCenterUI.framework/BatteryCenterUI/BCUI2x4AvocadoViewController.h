@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andMaxNumViews:(double)a1;

@end
