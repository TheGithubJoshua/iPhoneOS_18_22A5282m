@class _PASSqliteDatabase, NSString, _ATXDuetHelper, PETScalarEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXDataStore : NSObject <ATXBackupDataProviderDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    unsigned long long _schemaVersion;
    _ATXDuetHelper *_duetHelper;
    PETScalarEventTracker *_dbMigrationTracker;
}

@property (readonly, nonatomic) _PASSqliteDatabase *db;
@property (nonatomic) unsigned long long actionHistoryLengthPerAppAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)pareDownForBackup:(struct sqlite3 { } *)a0;
+ (id)loadDataFromFile:(id)a0;
+ (id)stringForHistogramType:(long long)a0;
+ (id)defaultPath;
+ (id)removeSensitiveInformationFromModeEntityScoresFile:(id)a0 shouldBackupContacts:(BOOL)a1;
+ (BOOL)isSqliteData:(id)a0;
+ (void)_simulateCrashForMigrationFailure:(id)a0;

- (void)migrate;
- (long long)skipFromZeroSchema;
- (void)updateSchemaVersionNumberTo:(long long)a0;
- (id)actionLogKeys;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (long long)migration_RemoveFeedbackForUninstalledApps;
- (BOOL)_reset;
- (void)_doAsync:(id /* block */)a0;
- (void)clearAppLaunchInfo;
- (id)init;
- (void)writeSubtitle:(id)a0 cacheKey:(id)a1;
- (void)regenerateSlotSetKeyForBundleId:(id)a0;
- (long long)_regenerateSlotSetKeyForBundleId:(id)a0;
- (id)filenamesAndDataForBackupShouldPareDown:(BOOL)a0 transport:(unsigned long long)a1;
- (long long)migration_RemoveAllSubsequentLaunches;
- (void)recordConfirms:(double)a0 rejects:(double)a1 forFeedbackType:(unsigned long long)a2 forActionType:(id)a3 bundleId:(id)a4 action:(id)a5 slotSet:(id)a6 actionUUID:(id)a7 date:(id)a8 consumerSubType:(unsigned char)a9 geohash:(long long)a10 coarseGeohash:(long long)a11;
- (void)_testMigrate;
- (id)appLaunchSequence;
- (long long)migration_RemoveActionsWithoutTitle;
- (long long)migration_AddFeedbackColumns;
- (id)totalSlotsInDatastore;
- (long long)migration_InstallDateToAppTable;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (void)addAppLaunchForBundleId:(id)a0 date:(id)a1 withLaunchType:(long long)a2;
- (unsigned long long)numBundleIdOccurrencesForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)removeAllAppActionPredictionFeedbackCounts;
- (id)appIntentDuetEventsForActionsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)removeFeedbackForBundleId:(id)a0;
- (id)appInfoForBundleId:(id)a0;
- (void)removeAllSlotsFromSlotSetKey;
- (long long)migration_overrideNilInstallDateToDistantOldTime;
- (void)removeAllFeedback;
- (id)lastMessageToRecipient:(id)a0;
- (void)enumerateStateForApps:(id)a0 withGlobalBlock:(id /* block */)a1 thenWithPerAppBlock:(id /* block */)a2 readOnly:(BOOL)a3;
- (long long)migration_forceUpdateNewAzulSystemAppsInstallDate;
- (BOOL)hasOrphanSlotSetKeys;
- (void)writeAverageSecondsBetweenLaunches:(id)a0 forBundleId:(id)a1;
- (long long)migration_AppLaunchHistogramToTable;
- (id)initWithInMemoryDataStore;
- (void)addAppActionLaunchForAppAction:(id)a0 date:(id)a1;
- (void)writeApp2VecCluster:(id)a0 forBundleId:(id)a1;
- (void)enumerateActionTypesOlderThan:(id)a0 block:(id /* block */)a1;
- (void)updateOrInsertApp2VecCluster:(id)a0 forBundleId:(id)a1;
- (void)updateOrInsertGenreId:(id)a0 subGenreIds:(id)a1 forBundleId:(id)a2;
- (id)blobOfType:(long long)a0;
- (void)_enumerateAppInfoAppActionsExecutingBlock:(id /* block */)a0;
- (void)enumerateStateForApps:(id)a0 withGlobalBlock:(id /* block */)a1 thenWithPerAppBlock:(id /* block */)a2;
- (void)removeCachedIntentsWithBundleId:(id)a0;
- (id)lastLaunchedApp;
- (id)getSuggestionResponsesAsStringInDB;
- (long long)migration_RemoveCachedConsumerDB;
- (id)lastLaunchDate;
- (id)loadTopNAppActionsByPredictions:(unsigned long long)a0;
- (id)loadAppActionInfo;
- (long long)migration_populateModeCaches;
- (BOOL)writeSlotSetKeyParameters:(id)a0 rowId:(id)a1 slotSet:(id)a2 success:(long long *)a3;
- (void)addHistogramData:(id)a0 forHistogramOfType:(long long)a1;
- (long long)migration_removeHomeScreenWidgetBlacklistFile;
- (void)updateOrInsertSubsequentAppActionLaunchCountData:(id)a0 forAppAction:(id)a1;
- (long long)runMigrationPlan:(id)a0;
- (long long)migration_updateNewAzulSystemAppsInstallDate;
- (void)updateOrInsertMessageRecipient:(id)a0 dateMessaged:(id)a1;
- (id)_appInfoForBundleIdNoSync:(id)a0;
- (void)addAppInstallForBundleId:(id)a0 date:(id)a1 genreId:(id)a2 subGenreIds:(id)a3;
- (void)_markBundleIdsAsExtension:(id)a0;
- (BOOL)_removeActionsWithoutTitle;
- (id)allActionsAndSlots;
- (void)writeGenreId:(id)a0 subGenreIds:(id)a1 forBundleId:(id)a2;
- (unsigned long long)numActionParameterHashOccurrencesForActionKey:(id)a0 parameterHash:(unsigned long long)a1 startDate:(id)a2 endDate:(id)a3;
- (void)updateOrInsertAverageSecondsBetweenLaunches:(id)a0 forBundleId:(id)a1;
- (void)clearAppInstallInfo;
- (void)updateOrInsertHistogramData:(id)a0 forHistogram:(long long)a1;
- (void)trimActionHistoryWithAppWhitelist:(id)a0;
- (long long)migration_LaunchHistoriesToAppTable;
- (void)migrateWithMigrationPlan:(id)a0;
- (void)updateOrInsertAverageSecondsBetweenAppActions:(id)a0 forAppAction:(id)a1;
- (id)_lastAppLaunchDateOfType:(long long)a0;
- (void)deleteLaunchesFollowingBundle:(id)a0;
- (long long)migration_moveCacheFiles;
- (void)_doSync:(id /* block */)a0;
- (id)averageSecondsBetweenAppActionsForAppAction:(id)a0;
- (void)removeAllCachedIntents;
- (long long)migration_DeprecateIntentForAllAppsHistograms;
- (void)removeActionDataForBundleId:(id)a0;
- (id)nthMostRecentAppLaunch:(long long)a0;
- (id)numActionKeyOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (void)updateOrInsertMedianSecondsBetweenLaunches:(id)a0 forBundleId:(id)a1;
- (void)removeActionDataForActionUUIDs:(id)a0;
- (void)swapInDuetHelperStub:(id)a0;
- (BOOL)alogContainsActionUUID:(id)a0;
- (id)lastSpotlightLaunchDate;
- (void)updateOrInsertTimestamp:(long long)a0 intoColumn:(id)a1 forBundleId:(id)a2 isExtension:(BOOL)a3;
- (void)vacuumDatabaseWithActivity:(id)a0;
- (struct _PASDBIterAction_ { BOOL x0; })_deserializeActionLogRowWithStmt:(id)a0 invokingBlock:(id /* block */)a1;
- (void)writeActionType:(id)a0 bundleId:(id)a1 date:(id)a2 action:(id)a3 slotSets:(id)a4 timeZone:(id)a5 prevLocationUUID:(id)a6 locationUUID:(id)a7 weight:(double)a8 actionUUID:(id)a9 motionType:(long long)a10 appSessionStartDate:(id)a11 appSessionEndDate:(id)a12 geohash:(long long)a13 coarseGeohash:(long long)a14;
- (void)removeAllSlotsFromActionFeedback;
- (id)actionAndSlotsForRowId:(id)a0;
- (void)clearDatabase;
- (void)updateOrInsertTimestamp:(long long)a0 forAppAction:(id)a1;
- (void)removeAppInfoForBundleId:(id)a0;
- (void)writeValidParameterCombinationsWithSchema:(id)a0 cacheKey:(id)a1;
- (void)insertSuggestionResponse:(id)a0 response:(long long)a1 timestamp:(long long)a2 suggestionType:(long long)a3;
- (id)lastAppActionLaunchDateForAppAction:(id)a0;
- (void).cxx_destruct;
- (id)allApps;
- (BOOL)checkIfInDB:(id)a0 suggestionType:(long long)a1;
- (void)addCategoricalHistogramData:(id)a0 forHistogramOfType:(long long)a1;
- (id)categoricalHistogramDataForHistogramType:(long long)a0;
- (void)removeAppInfoForBundleIdsNotInSet:(id)a0;
- (void)enumerateActionOfType:(id)a0 bundleId:(id)a1 block:(id /* block */)a2;
- (long long)configureDatabase;
- (id)_trimMigrationPlan:(id)a0 toSchema:(unsigned long long)a1;
- (void)pruneMessageRecipientsAddedBefore:(id)a0;
- (long long)migration_PrefillActionHistograms;
- (void)_removeFeedbackForBundleId:(id)a0;
- (BOOL)actionExistsForBundleId:(id)a0 actionType:(id)a1;
- (unsigned long long)numActionKeyOccurrencesForActionKey:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)writeMedianSecondsBetweenLaunches:(id)a0 forBundleId:(id)a1;
- (id)allAppsWithInstallDate;
- (void)enumerateAppInfoAppActionsExecutingBlock:(id /* block */)a0;
- (long long)migration_removeAnchorModelDirectory;
- (void)removeActionsWithoutTitle;
- (void)_markBundleId:(id)a0 asEnterpriseApp:(BOOL)a1;
- (id)loadLaunchesFollowingBundle:(id)a0;
- (id)isEligibleForWidgetsForCacheKey:(id)a0;
- (void)addAppInstallForBundleId:(id)a0 date:(id)a1 genreId:(id)a2 subGenreIds:(id)a3 app2VecCluster:(id)a4;
- (id)loadAppActionsFromAppActionInfo;
- (void)migrationPre44WriteActionType:(id)a0 bundleId:(id)a1 date:(id)a2 action:(id)a3 slotSets:(id)a4 timeZone:(id)a5 prevLocationUUID:(id)a6 locationUUID:(id)a7 weight:(double)a8 actionUUID:(id)a9 motionType:(long long)a10;
- (void)removeAllSlotsFromActionLog;
- (long long)migration_RecreatePredictionFeedbackInfo;
- (void)enumerateSlotUuidsOfType:(id)a0 bundleId:(id)a1 block:(id /* block */)a2;
- (void)integrityCheckOrAbort;
- (long long)updateAlog:(id)a0 slotsToMigrate:(id)a1;
- (void)addAppLaunchForAppLaunchSequence:(id)a0 date:(id)a1;
- (void)writeMedianSecondsBetweenAppActions:(id)a0 forAppAction:(id)a1;
- (void)writeAverageSecondsBetweenAppActions:(id)a0 forAppAction:(id)a1;
- (id)webClipsForAppClipBundleId:(id)a0;
- (id)_databaseSchema;
- (void)enumerateFeedbackForActionOfType:(id)a0 bundleId:(id)a1 block:(id /* block */)a2;
- (id)minimalActionParametersforActionsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (void)writeSupportsBackgroundExecution:(BOOL)a0 cacheKey:(id)a1;
- (void)resetSuggestionResponses;
- (id)actionFeedbackLogKeys;
- (id)_allAppsRequireInstallDate:(BOOL)a0;
- (void)updateOrInsertMedianSecondsBetweenAppActions:(id)a0 forAppAction:(id)a1;
- (id)initWithPath:(id)a0 andDuetHelper:(id)a1;
- (long long)migration_failForTests;
- (BOOL)containsActionType:(id)a0;
- (void)removeActionDataForActionUUID:(id)a0;
- (void)updateOrInsertPredictionsAndFeedbackForAppAction:(id)a0 feedbackReceived:(BOOL)a1 forUIType:(id)a2;
- (id)histogramDataForHistogramType:(long long)a0;
- (long long)migration_SlotSetKeyCreation;
- (void)writeAppActionLaunches:(id)a0 followingAppAction:(id)a1;
- (void)writeBlob:(id)a0 type:(long long)a1 expirationDate:(id)a2;
- (id)totalNumberOfActionTypesForBundleId:(id)a0;
- (void)writeEligibleForWidgets:(BOOL)a0 cacheKey:(id)a1;
- (BOOL)migrationUpdateOrInsertTimestamp:(long long)a0 intoColumn:(id)a1 forBundleId:(id)a2;
- (long long)launchedAppCount;
- (long long)migration_deleteFocusSpaceCaches;
- (id)loadAppActionLaunchesFollowing:(id)a0;
- (id)actionForSlotUUID:(id)a0;
- (void)enumerateActionsInUUIDSet:(id)a0 block:(id /* block */)a1;
- (id)supportsBackgroundExecutionForCacheKey:(id)a0;
- (long long)migrateToVersion:(unsigned long long)a0 withMigrationPlan:(id)a1;
- (long long)migration_removeOldStackStateTrackerFile;
- (id)titleForCacheKey:(id)a0;
- (id)validParameterCombinationsWithSchemaForCacheKey:(id)a0;
- (void)_markBundleIdAsExtension:(id)a0;
- (BOOL)restoreFromBackup:(id)a0;
- (void)writeLaunches:(id)a0 followingBundle:(id)a1;
- (long long)migration_AddEnterpriseAppInfo;
- (id)filenamesAndDataForBackupWithTransport:(unsigned long long)a0;
- (id)subtitleForCacheKey:(id)a0;
- (void)writeWebClip:(id)a0 appClip:(id)a1;
- (void)updateOrInsertInstallTimestamp:(long long)a0 genreId:(id)a1 subGenreIds:(id)a2 app2VecCluster:(id)a3 forBundleId:(id)a4 isExtension:(BOOL)a5 isEnterpriseApp:(BOOL)a6;
- (long long)migration_removeBrokenBlendingStream;
- (long long)migration_RemoveDeprecatedStartCallIntents;
- (void)enumerateAppInfoBundlesExecutingBlock:(id /* block */)a0;
- (void)updateOrInsertCategoricalHistogramData:(id)a0 forHistogram:(long long)a1;
- (void)updateOrInsertSubsequentLaunchCountData:(id)a0 forBundleId:(id)a1;
- (long long)_regenerateSlotSetKeys;
- (id)loadAppInfo;
- (void)_enumerateAppInfoBundlesExecutingBlock:(id /* block */)a0;
- (void)deleteLaunchesFollowingAppAction:(id)a0;
- (void)_testMigrateToSchema:(unsigned long long)a0;
- (void)writeTitle:(id)a0 cacheKey:(id)a1;
- (long long)migration_DeprecateGenericAppIntentModels;
- (void)enumerateStateForAppsReadOnly:(id)a0 withGlobalBlock:(id /* block */)a1 thenWithPerAppBlock:(id /* block */)a2;
- (long long)migration_DelinkFromCoreLocationVisitMonitoring;
- (id)medianSecondsBetweenAppActionsForAppAction:(id)a0;
- (long long)migration_AddExtensionInfo;
- (long long)migration_SlotSetKeyRegeneration;
- (void)_disconnectFromDb;
- (long long)currentSchemaVersion;
- (long long)migration_deleteAllTrainedRelevanceModels;
- (long long)migration_RemoveRestoreUserDefault;

@end
