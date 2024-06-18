@interface UIStatusBarDataNetworkItemViewAccessibility : __UIStatusBarDataNetworkItemViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)accessibilityValue;
- (BOOL)isWLAN;

@end
