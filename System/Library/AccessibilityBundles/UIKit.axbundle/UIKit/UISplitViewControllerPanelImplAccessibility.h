@interface UISplitViewControllerPanelImplAccessibility : __UISplitViewControllerPanelImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setViewControllers:(id)a0;
- (void)_updateDisplayModeButtonItem;
- (id)displayModeButtonItem;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilityUpdatePanelController;

@end
