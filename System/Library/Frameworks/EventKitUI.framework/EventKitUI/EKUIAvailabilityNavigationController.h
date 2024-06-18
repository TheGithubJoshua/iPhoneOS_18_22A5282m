@interface EKUIAvailabilityNavigationController : EKUIManagedNavigationController

- (BOOL)canManagePresentationStyle;
- (long long)modalPresentationStyle;
- (BOOL)wantsManagement;
- (BOOL)presentModally;

@end
