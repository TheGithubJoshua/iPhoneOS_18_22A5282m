@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)fetchCloudSettingsChangesImmediately;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)deletePerSiteSettingsSyncData;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)userAccountDidChange:(long long)a0;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)userDidUpdateBookmarkDatabase;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)beginMigrationFromDAV;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)triggerSafariTabGroupSync;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)registerForPushNotificationsIfNeeded;
- (void)setUsesOpportunisticPushTopic:(BOOL)a0;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)deleteBackgroundImageDirectory;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;

@end
