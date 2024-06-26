@class _UIStatusBarSensorActivityView;

@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator;

- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_sensorActivityIndicator;

@end
