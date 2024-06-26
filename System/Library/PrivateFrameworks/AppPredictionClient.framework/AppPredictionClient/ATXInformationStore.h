@class NSString, _PASSqliteDatabase;

@interface ATXInformationStore : NSObject <_PASDatabaseMigrationProtocol> {
    NSString *_databasePath;
    NSString *_cachedSuggestionsPath;
    _PASSqliteDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)migrations;
- (id)databaseHandle;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)firstAppearDateOfSuggestedWidgetWithUniqueId:(id)a0;
- (BOOL)didMostRecentReloadFailForExtension:(id)a0 kind:(id)a1 intent:(id)a2 cutoffDate:(id)a3;
- (id)fetchWidgetTapEngagementsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (BOOL)deleteInfoSuggestion:(id)a0;
- (id)latestInfoSuggestionRelevantNowForSourceId:(id)a0;
- (BOOL)deleteAllInfoSuggestionsWithSourceIdentifier:(id)a0 error:(id *)a1;
- (id)firstEngagementOfWidget:(id)a0 kind:(id)a1 intent:(id)a2 sinceTimestamp:(id)a3;
- (BOOL)writeInfoSuggestions:(id)a0;
- (id)fetchWidgetTapEngagementCountSinceStartDate:(id)a0;
- (BOOL)atomicallyDeleteInfoSuggestions:(id)a0 insertInfoSuggestions:(id)a1;
- (id)mostRecentTimelineUpdateDateOfWidget:(id)a0 kind:(id)a1;
- (id)fetchAbuseControlOutcomesForSuggestion:(id)a0 sinceDate:(id)a1;
- (id)readAllDismissRecords;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithIntent:(id)a0;
- (BOOL)clearOutdatedWidgetEngagements;
- (id)mostRecentEngagementOfWidget:(id)a0;
- (id)initWithDatabasePath:(id)a0 cachedSuggestionsPath:(id)a1;
- (id)_openSqliteDatabaseAtPath:(id)a0;
- (id)latestUpdateDateForSourceId:(id)a0;
- (BOOL)clearOutdatedWidgetReloadEntries;
- (BOOL)addStackConfigStatistics:(id)a0;
- (BOOL)addEngagementRecordForWidget:(id)a0 date:(id)a1 engagementType:(long long)a2;
- (id)_dateIntervalFromDismissStatement:(id)a0;
- (id)distinctScoresForWidget:(id)a0 kind:(id)a1;
- (id)proactiveRotationsForWidgetInThePastDay:(id)a0 kind:(id)a1 intent:(id)a2 filterByClientModelId:(id)a3;
- (id)firstTimeAtWhichSuggestionPassedTimelineFilters:(id)a0;
- (id)earliestFutureSuggestionChangeDate;
- (BOOL)insertOrIgnoreProactiveStackRotationRecord:(id)a0;
- (id)fetchDistinctScoreCountForWidgets;
- (id)fetchWidgetEngagementRecords;
- (id)upcomingDateThatTimelineScoreChangesToOrFromZeroForWidget:(id)a0 kind:(id)a1 familyMask:(unsigned long long)a2 intent:(id)a3;
- (id)mostRecentRotationRecordForSuggestionIdentifier:(id)a0;
- (BOOL)addAbuseControlOutcomes:(id)a0;
- (id)readCurrentlyRelevantSuggestions;
- (id)readCachedSuggestions;
- (unsigned long long)numberOfInfoSuggestionsForAppBundleIdentifier:(id)a0;
- (id)nextImportantDateAmongTimelineInducedProactiveStackRotationRecords;
- (id)fetchTimelineEntriesForWidget:(id)a0 sinceDate:(id)a1;
- (id)deleteExpiredSuggestions;
- (id)readAllInfoSuggestions;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidget:(id)a0 kind:(id)a1 intent:(id)a2;
- (id)mostRecentTimelineEntryWithScoreForWidget:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (long long)mostRecentAbuseControlOutcomeForSuggestionId:(id)a0;
- (BOOL)clearOutdatedSuggestedWidgetEntries;
- (BOOL)_migrateDatabaseIfNeeded;
- (id)fetchDistinctWidgetsIgnoringIntentSinceDate:(id)a0;
- (id)mostRecentEngagementOfWidget:(id)a0 kind:(id)a1 ofType:(long long)a2;
- (void).cxx_destruct;
- (BOOL)updateEndDateForInfoSuggestions:(id)a0;
- (id)readAllInfoSuggestionsWithSourceIdentifier:(id)a0;
- (BOOL)_configureDatabase;
- (BOOL)appendDismissRecord:(id)a0;
- (id)mostRecentRotationRecordForWidget:(id)a0 kind:(id)a1 intent:(id)a2 considerStalenessRotation:(BOOL)a3 filterByClientModelId:(id)a4;
- (BOOL)_openDatabase;
- (BOOL)updateMostRecentTapOfWidget:(id)a0 date:(id)a1;
- (BOOL)clearWidgetRemovalHistoryOlderThan:(id)a0;
- (BOOL)recordWidgetReloadForSuggestion:(id)a0 date:(id)a1 readyForDisplay:(BOOL)a2;
- (id)recentRelevantTimelineEntriesOrderedByDescendingScoreForWidget:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (BOOL)rotationExistsForSuggestionWithId:(id)a0 considerStalenessRotation:(BOOL)a1;
- (BOOL)deleteExpiredProactiveStackRotations;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithExtensionBundleId:(id)a0;
- (id)engagementTimestampsForExtensionBundleId:(id)a0 kind:(id)a1 intent:(id)a2 engagementType:(long long)a3;
- (BOOL)updateMostRecentSignificantDwellOfWidget:(id)a0 date:(id)a1;
- (void)dealloc;
- (id)criterionOfInfoSuggestionWithIdentifier:(id)a0;
- (BOOL)recordSuggestionPassedTimelineFiltersForTheFirstTime:(id)a0;
- (BOOL)_handleCorruptionIfNeeded;
- (BOOL)deleteAllSuggestionsForSourceId:(id)a0 excludingSuggestionId:(id)a1;
- (BOOL)_insertTimelineEntries:(id)a0 forWidget:(id)a1 storageLimit:(unsigned long long)a2;
- (BOOL)insertTimelineEntries:(id)a0 forWidget:(id)a1;
- (BOOL)writeCacheWithNewSuggestions:(id)a0;
- (BOOL)recordSuggestedWidgetUniqueIdIfNotExist:(id)a0;
- (id)mostRecentEngagementOfWidget:(id)a0 ofType:(long long)a1;
- (BOOL)recordUserRemovalOfSuggestedWidget:(id)a0 kind:(id)a1 intent:(id)a2 atDate:(id)a3 duration:(double)a4;
- (BOOL)didSuggestionReachDurationLimit:(id)a0;
- (BOOL)clearOldAbuseControlOutcomeData;
- (unsigned long long)numberOfInfoSuggestionsForSourceId:(id)a0;
- (id)widgetSuggestionRemovalRecordsForDiagnostics;
- (unsigned long long)numberOfWidgetReloadForSuggestionInPastDay;
- (id)fetchStackConfigStatisticsForWidgetBundleId:(id)a0 widgetKind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3;
- (unsigned long long)numberOfSuggestedWidgetsInPastDay;
- (BOOL)addAbuseControlOutcomeForSuggestion:(id)a0 forTimestamp:(long long)a1 outcome:(long long)a2;
- (void)close;

@end
