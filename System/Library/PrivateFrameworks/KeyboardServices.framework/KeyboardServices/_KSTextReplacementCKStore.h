@class NSString, _KSCloudKitManager, NSObject, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore;
@property (nonatomic) BOOL ckMigrationStatusOnCloud;
@property (nonatomic) unsigned long long numPullRequests;
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMigrationCompleted;

- (void)removeAllEntries;
- (id)initWithDirectoryPath:(id)a0;
- (void)userDidDeleteRecordZone:(id)a0;
- (id)queryDeletedEntries;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (id)queryUpdatedLocalEntries;
- (unsigned long long)getSyncCount;
- (void)accountDidChange:(id)a0;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)textReplacementEntries;
- (void)pushMigrationStatusToCloud:(BOOL)a0;
- (void)pushAllLocalData;
- (BOOL)isAccountAvailable;
- (id)cloudRecordIDsForLocalEntries:(id)a0;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (id)localEntriesFromCloudEntries:(id)a0;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)totalPullRequestsUntilNow;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)dealloc;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)recordSyncStatus;
- (void)queryCloudIfFirstPullOrAccountChanged:(BOOL)a0;
- (void)importSampleShortcutsIfNecessary;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;

@end
