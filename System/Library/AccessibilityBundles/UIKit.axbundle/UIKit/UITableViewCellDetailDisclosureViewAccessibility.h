@interface UITableViewCellDetailDisclosureViewAccessibility : __UITableViewCellDetailDisclosureViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentification;

@end
