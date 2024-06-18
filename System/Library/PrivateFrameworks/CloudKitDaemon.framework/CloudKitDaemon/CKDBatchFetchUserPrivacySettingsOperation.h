@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (void)main;
- (int)operationType;
- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
