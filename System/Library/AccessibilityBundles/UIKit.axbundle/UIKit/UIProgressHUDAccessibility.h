@interface UIProgressHUDAccessibility : __UIProgressHUDAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)accessibilityViewIsModal;
- (void)showInView:(id)a0;
- (BOOL)_accessibilityBlocksInteraction;

@end
