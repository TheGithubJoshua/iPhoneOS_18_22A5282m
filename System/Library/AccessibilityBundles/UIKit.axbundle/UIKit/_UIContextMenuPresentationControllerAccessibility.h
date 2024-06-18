@interface _UIContextMenuPresentationControllerAccessibility : ___UIContextMenuPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)_createMenuViewIfNecessaryForMenu:(id)a0;
- (id)platterContainerView;
- (void)_accessibilityLoadAccessibilityInformation;

@end
