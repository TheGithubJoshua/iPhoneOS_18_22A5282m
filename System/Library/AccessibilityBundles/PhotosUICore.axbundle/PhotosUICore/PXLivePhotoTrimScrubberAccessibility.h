@interface PXLivePhotoTrimScrubberAccessibility : __PXLivePhotoTrimScrubberAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (void)_loadKeyFrameAX;
- (id)_accessibilityTimeForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_loadEndTrimAX;
- (void)_loadStartTrimAX;

@end
