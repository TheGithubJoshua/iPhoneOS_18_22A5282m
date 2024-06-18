@class NSDate, WBSPeriodicActivityScheduler, NSString, WBSHistoryObjectCache, NSURL, WBSHistoryCrypto, NSObject, NSMutableSet;
@protocol WBSHistoryConnectionProxy, WBSHistoryServiceDatabaseProtocol, OS_dispatch_source, WBSHistoryStoreDelegate, OS_dispatch_queue;

@interface WBSHistoryServiceStore : NSObject <WBSHistoryConnectionProxyDelegate, WBSHistoryStore, WBSHistoryServiceDatabaseDelegate> {
    Class _historyItemClass;
    unsigned long long _itemCountLimit;
    struct atomic<WBSHistoryServiceStoreState> { struct __cxx_atomic_impl<WBSHistoryServiceStoreState, std::__cxx_atomic_base_impl<WBSHistoryServiceStoreState>> { _Atomic long long __a_value; } __a_; } _state;
    id<WBSHistoryConnectionProxy> _connection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    id<WBSHistoryServiceDatabaseProtocol> _database;
    WBSHistoryObjectCache *_cache;
    long long _nextTemporaryDatabaseID;
    long long _lastTemporaryDatabaseID;
    id /* block */ _loadCompletionBlock;
    NSDate *_lastMaintenanceDate;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    NSObject<OS_dispatch_source> *_sendDeltaToServiceTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    NSMutableSet *_pendingAddsOrUpdates;
}

@property (readonly, nonatomic) NSString *databaseID;
@property (retain, nonatomic) NSURL *databaseURL;
@property (weak, nonatomic) id<WBSHistoryStoreDelegate> delegate;
@property (nonatomic) double historyAgeLimit;
@property (readonly, nonatomic) WBSHistoryCrypto *crypto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isUsingInMemoryDatabase;

- (void)computeFrequentlyVisitedSites:(unsigned long long)a0 minimalVisitCountScore:(unsigned long long)a1 blockList:(id)a2 allowList:(id)a3 options:(unsigned long long)a4 currentTime:(double)a5 completionHandler:(id /* block */)a6;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)a0;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)a0 beforeDate:(id)a1 onlyFromThisDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reportSevereError:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForVisits:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDatabaseID:(id)a0 itemCountLimit:(unsigned long long)a1 historyAgeLimit:(double)a2 historyItemClass:(Class)a3 connectionProxy:(id)a4;
- (void)itemsWereModified:(id)a0 byUserInitiatedAction:(BOOL)a1;
- (id)allVisitsForItemsOnDatabaseQueue:(id)a0;
- (void)_fetchTags:(unsigned long long)a0 fromStartDate:(id)a1 toEndDate:(id)a2 withIdentifiers:(id)a3 limit:(unsigned long long)a4 minimumItemCount:(unsigned long long)a5 sortOrder:(long long)a6 completionHandler:(id /* block */)a7;
- (void)visitsWereAdded:(id)a0;
- (void)connectionProxyConnectionWasInterrupted:(id)a0;
- (void)_evaluateWithOptionsOnDatabaseQueue:(unsigned long long)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void)_addOrUpdateItemsOnDatabaseQueue:(id)a0 userInitiated:(BOOL)a1;
- (void)performMaintenance:(id /* block */)a0;
- (void)getAutocompleteTriggersForItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)searchForUserTypedString:(id)a0 options:(unsigned long long)a1 currentTime:(double)a2 enumerationBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getVisitsCreatedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (double)_ageLimitSinceReferenceDate;
- (void)_connectWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_processPendingWrites:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_fetchWithOptionsOnDatabaseQueue:(unsigned long long)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_waitForDatabase:(id /* block */)a0;
- (void)getItemCountBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDatabaseID:(id)a0 itemCountLimit:(unsigned long long)a1 historyAgeLimit:(double)a2 historyItemClass:(Class)a3;
- (void)fetchTopicsFromStartDate:(id)a0 toEndDate:(id)a1 limit:(unsigned long long)a2 minimumItemCount:(unsigned long long)a3 sortOrder:(long long)a4 completionHandler:(id /* block */)a5;
- (void)_databaseFetchWithOptions:(unsigned long long)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_load:(id /* block */)a0;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)a0;
- (id)_connectOptions;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)_scheduleSendDeltaToService;
- (void)_enumerateVisitsGroupedByItem:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)_fetchWithOptions:(unsigned long long)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_ensureItemHasID:(id)a0;
- (void)fetchTopicsFromStartDate:(id)a0 toEndDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_fetchGroupedVisitsOnDatabaseQueue:(unsigned long long)a0 predicate:(id)a1 enumerationBlock:(id /* block */)a2;
- (id)_loadOnDatabaseQueue:(unsigned long long)a0 readHandle:(id)a1;
- (void)_createTagsForIdentifiers:(id)a0 withTitles:(id)a1 type:(unsigned long long)a2 level:(long long)a3 completionHandler:(id /* block */)a4;
- (void)addAutocompleteTrigger:(id)a0 forItem:(id)a1;
- (id)_fetchVisitsOnDatabaseQueue:(unsigned long long)a0 predicate:(id)a1 error:(id *)a2;
- (void)_setMetadataValue:(id)a0 forKey:(id)a1 group:(id)a2;
- (void)itemWasReplaced:(id)a0 byItem:(id)a1;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePastHistoryVisitsForItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTitle:(id)a0 ofTag:(id)a1 completionHandler:(id /* block */)a2;
- (long long)_generateTemporaryDatabaseID;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)assignHistoryItem:(id)a0 toTopicTags:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)_expireOldVisits;
- (void)visitsWereModified:(id)a0;
- (void)_processPendingWrites;
- (BOOL)_ensureVisitHasID:(id)a0;
- (void)_updateLastMaintenanceDate;
- (void)itemsWereAdded:(id)a0 byUserInitiatedAction:(BOOL)a1;
- (void)tagsWithIdentifiers:(id)a0 type:(unsigned long long)a1 level:(long long)a2 creatingIfNecessary:(BOOL)a3 withTitles:(id)a4 completionHandler:(id /* block */)a5;
- (void)_scheduleMaintenance;
- (void)_fetchHistoryItemsForTopics:(id)a0 fromStartDate:(id)a1 toEndDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)a0;
- (void)_performMaintenance:(id /* block */)a0;
- (void)visitTitleWasUpdated:(id)a0;
- (void)_scheduleImmediateDeltaToService;
- (void)waitForLoadingToComplete;

@end