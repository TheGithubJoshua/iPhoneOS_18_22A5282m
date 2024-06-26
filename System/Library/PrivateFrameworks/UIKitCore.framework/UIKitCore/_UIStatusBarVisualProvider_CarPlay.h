@class UIFont, _UIStatusBarRegion, NSString, _UIStatusBarVisualProvider_PillRegionCoordinator, _UIStatusBar;

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider, _UIStatusBarPillRegionVisualProvider>

@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;
@property (retain, nonatomic) _UIStatusBarRegion *timeRegion;
@property (retain, nonatomic) _UIStatusBarRegion *radarRegion;
@property (nonatomic) BOOL showingSensorActivityIndicator;
@property (nonatomic) BOOL showingPill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (nonatomic) BOOL expanded;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)init;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (id)styleAttributesForStyle:(long long)a0;
- (void).cxx_destruct;
- (id)_animationForPillTime;
- (id)_animationForSensorIndicator;
- (id)_defaultScaleAnimationWithIdentifier:(id)a0;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)a0;
- (id)condensedFontForCellularType:(long long)a0 defaultFont:(id)a1 baselineOffset:(double *)a2;
- (void)itemCreated:(id)a0;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)setupInContainerView:(id)a0;
- (BOOL)showSensorActivityIndicatorWithoutPortalView;
- (id)willUpdateWithData:(id)a0;

@end
