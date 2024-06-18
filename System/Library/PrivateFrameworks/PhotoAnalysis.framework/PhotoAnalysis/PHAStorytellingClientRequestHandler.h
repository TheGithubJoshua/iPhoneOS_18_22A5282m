@class NSString, NSMutableDictionary, PHPhotoLibrary, PGManager, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAStorytellingClientRequestHandler : NSObject <PLPhotoAnalysisGraphServiceMusicProtocol, PHAServiceOperationHandling> {
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableDictionary *_progressReporterByQueryID;
}

@property (readonly, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_aggregateErrorWithErrorDescriptions:(id)a0;
+ (id)_fetchOptionsForMusicCurationWithPhotoLibrary:(id)a0;
+ (unsigned long long)_sceneTypeForParallaxClassification:(unsigned long long)a0;

- (void)requestUtilityAssetLocalIdentifiersWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRunPFLWithAttachments:(id)a0 recipeUserInfo:(id)a1 context:(id)a2 resultBlock:(id /* block */)a3;
- (void)requestClearMusicCacheWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestUpdatePetIdentitiesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAllSocialGroupsForPersonLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestZeroKeywordsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMomentLocalIdentifiersForMeaning:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestTrendsByIdentifierWithCadence:(id)a0 forYear:(unsigned long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 withOptions:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)runCurationWithItems:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)a0;
- (BOOL)updatePetIdentityWithProcessor:(id)a0 errors:(id)a1;
- (void)requestDefaultsObjectForKey:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)_assetCollectionForRelatedIdentifier:(id)a0;
- (void)requestGraphServiceStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 precision:(unsigned long long)a3 relatedType:(unsigned long long)a4 context:(id)a5 reply:(id /* block */)a6;
- (void)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (id)_defaultImageCreationOptions;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestTitleForPersonLocalIdentifiers:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)a0 referenceAssetLocalIdentifier:(id)a1 precision:(unsigned long long)a2 options:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)a0 duration:(unsigned long long)a1 precision:(unsigned long long)a2 options:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (id)relatedRequestPredicateValidator;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)runShadowEvaluationWithRecipe:(id)a0 models:(id)a1 trialDeploymentID:(id)a2 trialExperimentID:(id)a3 trialTreatmentID:(id)a4 context:(id)a5 resultBlock:(id /* block */)a6;
- (void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestPeopleForWallpaperSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphServicePerformsQueryWithContext:(id)a0 query:(id)a1 reply:(id /* block */)a2;
- (void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestPrecachingOfAudioDataForAdamIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestWallpaperPropertiesForAssets:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUpNextMemoriesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphInferencesSummaryWithDateInterval:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestHighlightEstimatesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestPeopleSuggestionLearningWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSocialGroupsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)_generateFaceCropForFaceCropSourceDescriptors:(id)a0;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 precision:(unsigned long long)a3 relatedType:(unsigned long long)a4 context:(id)a5 reply:(id /* block */)a6;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)_cacheAllSongSourcesWithCompletionHandler:(id /* block */)a0;
- (id)_utilityAssetLocalIdentifiersForKeyAssetOnly:(BOOL)a0;
- (void)requestCurationDebugInformationForAsset:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestRelatedMomentsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCacheStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (unsigned long long)_validatedMemoryNotificationState:(int)a0;
- (void)requestMomentMetricsWithContext:(id)a0 reply:(id /* block */)a1;
- (id)_asssetLocalIdentifiersByCityNameForKeyAssetOnly:(BOOL)a0;
- (id)_pvImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (void)reloadWidgetTimelineWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestExportGraphServiceForPurpose:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSignalModelInfosWithContext:(id)a0 reply:(id /* block */)a1;
- (void)handleOperation:(id)a0;
- (id)stringForQoS:(unsigned int)a0;
- (id)initWithGraphManager:(id)a0;
- (void)requestIconicSceneScoreForAssetLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSetDefaultsObject:(id)a0 forKey:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSongsForAdamIDs:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestCacheSongSourceWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestDiscoveryFeedItemsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphServiceStatisticsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestMusicCurationDebugInformationForSongWithAdamID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSynonymsDictionariesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)a0 andRelatedResultsForLocalIdentifiers:(id)a1 precision:(unsigned long long)a2 relatedType:(unsigned long long)a3 additionalSnapshotSummaryInfo:(id)a4 context:(id)a5 reply:(id /* block */)a6;
- (void)reloadWallpaperSuggestionsWithSuggestionUUIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetLocalIdentifiersByCityNameWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)exportWallpaperForAssets:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphMomentLocalIdentifiersWithDateInterval:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCatalogAdamIDsForPurchasedSongID:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestStartSharedLibrarySuggestionResultWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)_collectionListForLocalIdentifier:(id)a0;
- (void)requestSuggestionInfosWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)_pvFaceFromPHFace:(id)a0 copyPropertiesOption:(long long)a1;
- (void)requestGraphSearchMetadataWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)informationDictionaryForAsset:(id)a0;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCurationForAssetLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUtilityAssetInformationWithContext:(id)a0 reply:(id /* block */)a1;
- (void)simulateMemoriesNotificationWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestKeyAssetLocalIdentifierForPrototypeCategory:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)recordFeatureUsageFromCounts:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestNightlySuggestionsForPosterConfiguration:(id)a0 atDate:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSortedArrayOfPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestCurationOfLength:(unsigned long long)a0 forMemoryForLocalIdentifier:(id)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)a0 andRelatedResultsForLocalIdentifiers:(id)a1 precision:(unsigned long long)a2 relatedType:(unsigned long long)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;

@end