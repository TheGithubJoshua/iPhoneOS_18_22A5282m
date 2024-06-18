@interface UICollectionViewListCellAccessibility : __UICollectionViewListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityValue;
- (long long)_accessibilityExpandedStatus;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilityExpandedStatusTogglesOnActivate;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (id)_privateAccessibilityCustomActions;
- (id)_accessibilityTrailingViews;

@end
