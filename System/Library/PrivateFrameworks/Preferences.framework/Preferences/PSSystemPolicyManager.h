@interface PSSystemPolicyManager : NSObject

+ (id)_thirdPartyApplicationProxyForBundleID:(id)a0;
+ (id)_dataUsageWorkspaceInfo;
+ (id)_thirdPartyApplicationProxies;
+ (BOOL)_defaultAppSettingsNeededForBundleID:(id)a0;
+ (BOOL)_systemSettingsNeededForProxy:(id)a0;
+ (BOOL)_familyControlsSettingNeededForBundleID:(id)a0;
+ (BOOL)_languageSettingNeededForBundleID:(id)a0;
+ (void)_populateBBSectionIDs;
+ (BOOL)_pasteboardSettingsNeededForBundleID:(id)a0;
+ (id)thirdPartyApplicationProxyForBundleID:(id)a0;
+ (id)thirdPartyApplicationProxies;
+ (BOOL)_shouldIncludeProxy:(id)a0;
+ (BOOL)hasAnyAppClip;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)a0;
+ (BOOL)_privacySettingsNeededForProxy:(id)a0;
+ (id)thirdPartyApplicationsIncludingAppClips:(BOOL)a0;
+ (id)specifiersForThirdPartyApps:(id)a0;
+ (id)thirdPartyApplicationForBundleID:(id)a0;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)a0;
+ (BOOL)_liveActivitiesSettingsNeededForBundleID:(id)a0;
+ (BOOL)_documentSettingsNeededForBundleID:(id)a0;
+ (BOOL)_tapToPaySettingsNeededForBundleID:(id)a0;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)a0;
+ (id)thirdPartyApplications;

@end
