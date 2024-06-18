@interface SKUIStyledButtonAccessibility : __SKUIStyledButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsACategoryButton;
- (BOOL)_axButtonType:(BOOL)a0;
- (BOOL)_axIsCloseButton;
- (BOOL)_axIsPostButtonInConnect;
- (BOOL)_axIsShareButtonInConnect;

@end
