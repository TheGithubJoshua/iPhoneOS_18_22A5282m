@interface CEKWheelScrubberViewAccessibility : __CEKWheelScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (void)_axFilterAnnouncement;
- (BOOL)_axIsFilterChooser;
- (id)_axPhotoEffect;
- (id)_axPhotoFilterName;

@end
