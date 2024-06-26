@interface CKDSPIContainer : CKDContainer <CKXPCContainerScopedDaemonSPI>

- (void)performSerializeRecordModificationsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)fetchPCSFromCacheForShareWithRecordID:(id)a0 databaseScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)performInitiateParticipantVettingOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performFetchMergeableDeltasOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performRepairAssetsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)decryptPersonalInfoOnShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentUserBoundaryKeyWithCompletionHandler:(id /* block */)a0;
- (void)performRepairZonePCSOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performFetchMergeableDeltaMetadataOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)fetchPCSFromCacheForZoneWithZoneID:(id)a0 databaseScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)performMarkAssetBrokenOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performDeserializeRecordModificationsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performModifyWebSharingOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)getOutstandingOperationCountWithCompletionHandler:(id /* block */)a0;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)a0;
- (void)representativeDataclassEnabledWithCompletionHandler:(id /* block */)a0;
- (void)setFakeError:(id)a0 forNextRequestOfClassName:(id)a1;
- (void)performAggregateZonePCSOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performModifyRecordAccessOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)clearCachesForZoneWithZoneID:(id)a0 databaseScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)tossConfigWithCompletionHandler:(id /* block */)a0;
- (void)currentDeviceIDWithCompletionHandler:(id /* block */)a0;
- (void)setApplicationPermission:(unsigned long long)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)performFetchRecordVersionsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)a0;
- (void)dropDetachedContainersWithCompletionHandler:(id /* block */)a0;
- (void)clearCachesForRecordWithRecordID:(id)a0 databaseScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)clearContainerFromMetadataCache;
- (void)performReplaceMergeableDeltasOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)serverEnvironmentWithCompletionHandler:(id /* block */)a0;
- (void)performPublishAssetsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)performFetchArchivedRecordsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)frameworkCachesDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)performFetchRegisteredBundleIDsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)a0;
- (void)performCompleteParticipantVettingOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)clearRecordCacheWithDatabaseScope:(long long)a0;
- (void)performArchiveRecordsOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)getNewWebSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (void)clearAuthTokensWithRecordID:(id)a0 databaseScope:(long long)a1;
- (void)performFetchShareParticipantKeyOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)clearPILSCacheForLookupInfos:(id)a0;
- (void)performUploadMergeableDeltasOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)countAssetCacheItemsWithDatabaseScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)clearAssetCacheWithDatabaseScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)performFetchUserQuotaOperation:(id)a0 clientOperationCallbackProxy:(id)a1 withBlock:(id /* block */)a2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)showAssetCacheWithDatabaseScope:(long long)a0;
- (void)clearCachesWithOptions:(unsigned long long)a0 databaseScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)a0;
- (void)setFakeResponseOperationResult:(id)a0 forNextRequestOfClassName:(id)a1 forItemID:(id)a2 withLifetime:(int)a3;

@end
