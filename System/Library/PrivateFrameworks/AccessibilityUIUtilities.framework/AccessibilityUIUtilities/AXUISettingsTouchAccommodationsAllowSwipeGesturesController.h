@class NSArray;

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController

@property (retain, nonatomic) NSArray *minimumDistanceSpecifiers;
@property (nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;

- (id)specifiers;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_allowsSwipesToBypass:(id)a0;
- (id)_minimumDistanceSpecifiers;
- (void)_setAllowsSwipesToBypass:(id)a0 specifier:(id)a1;
- (BOOL)_shouldShowSwipeMinimumDistanceSpecifier;
- (id)_specifierWithName:(id)a0 minimumDistance:(double)a1;

@end
