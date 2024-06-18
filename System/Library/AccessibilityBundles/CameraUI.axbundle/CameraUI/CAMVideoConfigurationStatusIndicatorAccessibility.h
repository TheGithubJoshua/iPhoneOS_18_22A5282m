@interface CAMVideoConfigurationStatusIndicatorAccessibility : __CAMVideoConfigurationStatusIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axFramerateLabel;
- (BOOL)_axFramerateTapped;
- (id)_axResolutionLabel;
- (BOOL)_axResolutionTapped;
- (id)_axSeparatorLabel;
- (void)_axSetFramerateTapped:(BOOL)a0;
- (void)_axSetResolutionTapped:(BOOL)a0;

@end
