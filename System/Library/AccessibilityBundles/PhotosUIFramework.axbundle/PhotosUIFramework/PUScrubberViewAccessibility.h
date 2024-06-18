@interface PUScrubberViewAccessibility : __PUScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)_axVideoSession;
- (void)_axCloseVideoPlaybackAction;
- (BOOL)_axDecrementForThreeFingerScroll;
- (BOOL)_axIncrementForThreeFingerScroll;
- (BOOL)_axIsVideoPlayerActivated;
- (void)_axScrollToAssetReference:(id)a0 inViewModel:(id)a1 forThreeFingerScroll:(BOOL)a2;
- (id)_axShowingType;
- (id)_axTileControllerForAsset:(id)a0;
- (id)_axVideoPlaybackValue;
- (id)_axVideoPlayer;

@end
