@interface UIControlAccessibility : __UIControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
