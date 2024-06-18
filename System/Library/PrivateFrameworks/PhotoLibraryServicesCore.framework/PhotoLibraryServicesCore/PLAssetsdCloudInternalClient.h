@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)a0;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 pauseReason:(id)a1 systemBudgets:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)a0;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)markResourcesPurgeableWithUrgency:(long long)a0 assetUuids:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (BOOL)isReadyForAnalysis;
- (void)forceSyncMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)startExitFromLibraryScopeWithIdentifier:(id)a0 retentionPolicy:(long long)a1 exitSource:(long long)a2 completionHandler:(id /* block */)a3;
- (void)syncCloudPhotoLibrary;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (id)activateLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDeviceLibraryConfigurationChange:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)getResetSyncStatusWithError:(id *)a0;
- (void)setCloudPhotoLibraryEnabledStateSync:(BOOL)a0;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithCompletionHandler:(id /* block */)a0;
- (void)acceptShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishShare:(id)a0 completionHandler:(id /* block */)a1;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScope:(id)a0 excludePersonUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (id)emailAddressForKey:(long long)a0 error:(id *)a1;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 error:(id *)a2;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (void)fetchShareFromShareURL:(id)a0 ignoreExistingShare:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)forceParticipantAssetTrashNotificationCompletionHandler:(id /* block */)a0;
- (void)deactivateLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (id)personInfoDictionaryForPersonID:(id)a0 error:(id *)a1;
- (BOOL)isReadyForCloudPhotoLibrary;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithCompletionHandler:(id /* block */)a0;
- (void)removeParticipantsWithParticipantUUIDs:(id)a0 fromLibraryScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(long long)a3 completionHandler:(id /* block */)a4;
- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAutoEnableiCPLOnOSXWithError:(id *)a0;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (long long)keyForEmailAddress:(id)a0 error:(id *)a1;

@end