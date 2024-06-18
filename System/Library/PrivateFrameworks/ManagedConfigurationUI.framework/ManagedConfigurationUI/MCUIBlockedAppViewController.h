@interface MCUIBlockedAppViewController : PSListController

@property BOOL reenabled;

- (id)specifiers;
- (id)init;
- (void)setOverride:(id)a0;
- (void)dealloc;
- (BOOL)overridden;
- (void)_askForReenableConfirmation;
- (void)_blockedAppsUpdated;
- (id)_reenableButtonSpecifier;

@end
