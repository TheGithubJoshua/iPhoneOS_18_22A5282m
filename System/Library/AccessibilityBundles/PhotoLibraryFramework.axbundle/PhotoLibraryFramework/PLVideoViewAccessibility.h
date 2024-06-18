@interface PLVideoViewAccessibility : __PLVideoViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityURL;
- (void)_accessibilityClearChildren;
- (id)_accessibilityElementStoredUserLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidDisappear;
- (void)_createScrubberIfNeeded;
- (void)_showVideoOverlay;
- (void)_updateScrubberVisibilityWithDuration:(double)a0;
- (void)_videoOverlayFadeOutDidFinish;

@end
