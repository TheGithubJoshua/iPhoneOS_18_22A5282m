@interface OBPrivacyModalNavigationController : OBNavigationController

@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) BOOL darkMode;

- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)a0;

@end
