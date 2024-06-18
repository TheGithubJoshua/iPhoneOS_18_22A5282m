@interface UIImageViewAccessibility : __UIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)initWithImage:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentification;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;

@end
