@class _UIStatusBarStringView, _UIStatusBarIdentifier, _UIStatusBarImageView, _UIStatusBarWifiSignalView;

@interface _UIStatusBarWifiItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *signalStrengthDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *iconDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *rawDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarWifiSignalView *signalView;
@property (retain, nonatomic) _UIStatusBarImageView *networkIconView;
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView;

+ (id)groupWithPriority:(long long)a0;

- (long long)_barCountForUpdate:(id)a0;
- (void)_create_networkIconView;
- (double)_totalWidthForUpdate:(id)a0;
- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)a0;
- (id)_backgroundColorForUpdate:(id)a0 entry:(id)a1;
- (void).cxx_destruct;
- (double)_barThicknessForUpdate:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_rawStringView;
- (double)_interspaceForUpdate:(id)a0;
- (id)_fillColorForUpdate:(id)a0 entry:(id)a1;
- (void)_create_signalView;

@end