@class NSNumber;

@interface PUILocationServicesPrivacyAlertsLevelController : PUILocationServicesListController {
    NSNumber *_authorizationPromptMapDisplayEnabled;
}

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)authorizationPromptMapDisplayEnabled:(id)a0;
- (void)setAuthorizationPromptMapDisplayEnabled:(id)a0 specifier:(id)a1;

@end
