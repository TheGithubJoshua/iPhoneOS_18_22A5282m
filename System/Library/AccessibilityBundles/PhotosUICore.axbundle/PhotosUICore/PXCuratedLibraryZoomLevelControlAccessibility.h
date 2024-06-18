@interface PXCuratedLibraryZoomLevelControlAccessibility : __PXCuratedLibraryZoomLevelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_updateSegmentedControl;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void)setSelectedZoomLevel:(long long)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_axAdjustZoomLevel:(BOOL)a0;
- (id)_axSiblingScrollView;

@end
