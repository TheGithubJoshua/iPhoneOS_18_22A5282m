@class BSServiceConnection;
@protocol BSServiceConnectionClient;

@interface PRSService : NSObject {
    BSServiceConnection<BSServiceConnectionClient> *_serviceConnection;
}

- (void)exportPosterConfigurationMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchRuntimeAssertionState:(id /* block */)a0;
- (oneway void)fetchStaticPosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)refreshSnapshotForPosterConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)fetchSelectedConfiguration:(id /* block */)a0;
- (oneway void)deleteTransientDataWithCompletion:(id /* block */)a0;
- (void)fetchPosterSnapshotsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)createPosterConfigurationForProviderIdentifier:(id)a0 posterDescriptorIdentifier:(id)a1 completion:(id /* block */)a2;
- (oneway void)gatherDataFreshnessState:(id /* block */)a0;
- (void)importPosterConfigurationFromArchiveData:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchObscurableBoundsForPosterConfiguration:(id)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchExtensionIdentifiersWithCompletion:(id /* block */)a0;
- (void)notifyFocusModeDidChange:(id)a0 completion:(id /* block */)a1;
- (oneway void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(id /* block */)a0;
- (oneway void)clearMigrationFlags:(id /* block */)a0;
- (oneway void)fetchLimitedOcclusionBoundsForPosterConfiguration:(id)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateToSelectedConfigurationMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveGallery:(id /* block */)a0;
- (oneway void)removeAllFocusConfigurationsMatchingFocusUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchActiveConfiguration:(id /* block */)a0;
- (void)associateConfigurationMatchingUUID:(id)a0 focusModeActivityUUID:(id)a1 completion:(id /* block */)a2;
- (oneway void)ingestSnapshotCollection:(id)a0 forPosterConfiguration:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchFocusUUIDForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)updateToSelectedConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)updatePosterConfigurationMatchingUUID:(id)a0 updates:(id)a1 completion:(id /* block */)a2;
- (void)createAndSelectLegacyPosterConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchPosterConfigurations:(id /* block */)a0;
- (void)fetchAssociatedHomeScreenPosterConfigurationUUID:(id)a0 completion:(id /* block */)a1;
- (void)refreshPosterDescriptorsForExtension:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)a0 extensionIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)deletePosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (id)serviceNotificationCenterWithError:(id *)a0;
- (oneway void)overnightUpdateWithCompletion:(id /* block */)a0;
- (void)pushToProactiveWithCompletion:(id /* block */)a0;
- (void)prewarmWithCompletion:(id /* block */)a0;
- (oneway void)fetchContentCutoutBoundsForActivePosterWithOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (oneway void)deleteDataStoreWithCompletion:(id /* block */)a0;
- (oneway void)fetchActivePosterConfiguration:(id /* block */)a0;
- (oneway void)deleteSnapshots:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchPosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (void)fetchGallery:(id /* block */)a0;
- (void)refreshPosterConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)deletePosterConfigurationsMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (void)refreshPosterConfigurationMatchingUUID:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (oneway void)runMigration:(BOOL)a0 completion:(id /* block */)a1;
- (void)_refreshPosterDescriptorsForExtension:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (oneway void)fetchContentObstructionBoundsForPosterConfiguration:(id)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (oneway void)fetchContentObstructionBoundsForActivePosterWithOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)refreshPosterConfiguration:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (void)refreshPosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchContentCutoutBoundsForPosterConfiguration:(id)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchPosterConfigurationsForExtension:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_selectConfigurationAndRefreshSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)updatePosterConfiguration:(id)a0 update:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchMaximalContentCutoutBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)pushPosterGalleryUpdate:(id)a0 completion:(id /* block */)a1;
- (id)_serviceInterfaceWithError:(id *)a0;
- (void)refreshSnapshotForPosterConfigurationMatchingUUID:(id)a0 completion:(id /* block */)a1;

@end
