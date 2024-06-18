@interface SBHomeScreenEntity : SBWorkspaceEntity

- (BOOL)isHomeScreenEntity;
- (id)init;
- (long long)layoutRole;
- (long long)_mainDisplayPreferredInterfaceOrientation;

@end
