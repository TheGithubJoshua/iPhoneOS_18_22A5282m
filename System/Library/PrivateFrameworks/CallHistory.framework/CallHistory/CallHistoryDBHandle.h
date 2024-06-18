@class NSString, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (class, readonly, copy, nonatomic) NSString *objectId;

@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createForClient;
+ (id)createForServer;
+ (id)createWithDBManager:(id)a0;

- (id)fetchAll;
- (BOOL)save:(id *)a0;
- (id)timerLastReset;
- (id)timerIncoming;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)updateCallDBProperties;
- (id)fetchObjectsWithPredicate:(id)a0;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (id)callDBProperties;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)postTimersChangedNotification;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)callRecordContext;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)createCallRecord;
- (long long)deleteManagedCalls:(id)a0;
- (void)deleteAll;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (void)unRegisterForNotifications;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)registerForNotifications:(id)a0;
- (void).cxx_destruct;
- (id)initWithDBManager:(id)a0;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (void)resetTimers;
- (void)dealloc;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (BOOL)saveTimers:(id /* block */)a0;
- (BOOL)resetAllTimers;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)fetchAllNoLimit;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)timerOutgoing;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (id)timerLifetime;
- (id)fetchObjectsWithUniqueIds:(id)a0;

@end
