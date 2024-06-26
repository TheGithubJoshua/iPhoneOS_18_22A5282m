@class _UIStatusBarStringView, _UIStatusBarDualCellularSignalView, _UIStatusBarEmergencySignalView, _UIStatusBarIdentifier, _UIStatusBarCellularNetworkTypeView, _UIStatusBarMultilineStringView;

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem

@property (class, readonly) _UIStatusBarIdentifier *dualSignalStrengthDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *dualNameDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *dualSingleLineNameDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *dualSingleLineNameAndTypeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *sosSignalStrengthDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *animatedTypeDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView;
@property (retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView;
@property (retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView;
@property (retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView;
@property (retain, nonatomic) _UIStatusBarEmergencySignalView *sosSignalView;
@property (retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView;
@property (nonatomic) BOOL reducesFontSize;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (id)dependentEntryKeys;
- (id)_fontForEntry:(id)a0 styleAttributes:(id)a1 baselineOffset:(double *)a2;
- (id)viewForIdentifier:(id)a0;
- (BOOL)_showCallFowardingForEntry:(id)a0;
- (id)_stringForCellularType:(long long)a0;
- (void)_create_dualSignalView;
- (id)_singleCellularEntryMatching:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (void).cxx_destruct;
- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonCondensedFontRangeForEntry:(id)a0;
- (id)entryForDisplayItemWithIdentifier:(id)a0;
- (void)_create_animatedNetworkTypeView;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)_create_dualSingleLineNameView;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (BOOL)_animateServiceType:(long long)a0 prefixLength:(long long *)a1 currentType:(long long)a2;
- (void)_create_dualNameView;
- (void)_create_sosSignalView;
- (void)_create_dualSingleLineNameAndTypeView;

@end
