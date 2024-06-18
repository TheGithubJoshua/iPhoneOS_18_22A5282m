@class _UIStatusBarIdentifier, _UIStatusBarImageView;

@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *batteryDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarImageView *batteryImageView;

+ (BOOL)alwaysShowRegulatoryBluetoothIndicator;

- (void)_create_batteryImageView;
- (id)viewForIdentifier:(id)a0;
- (id)indicatorEntryKey;
- (id)systemImageNameForUpdate:(id)a0;
- (void).cxx_destruct;
- (id)_batteryFillColorForEntry:(id)a0 usingTintColor:(id)a1;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;

@end
