@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (void)setAccessibilityLabel:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void)setAccessibilityElements:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (void)setAccessibilityHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityHeaderElements;
- (id)accessibilityLanguage;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (BOOL)accessibilityViewIsModal;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityViewIsModal;
- (id)storedShouldGroupAccessibilityChildren;
- (id)_accessibilityCapturedImages;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedContainer;
- (id)accessibilityUserDefinedDragSourceDescriptors;
- (id)accessibilityUserDefinedDropPointDescriptors;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedLanguage;
- (id)accessibilityUserDefinedShouldGroupChildren;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedValue;
- (id)isAccessibilityUserDefinedElement;

@end
