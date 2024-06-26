@interface UISearchControllerAccessibility : __UISearchControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)setActive:(BOOL)a0;
- (void)_searchBarSearchButtonClicked:(id)a0;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;

@end
