@class NSString, CallHistoryDBClientHandle, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol> {
    TransactionManager *_transactionManager;
}

@property (readonly, nonatomic) CallHistoryDBClientHandle *dbHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timerIncoming;
- (id)init;
- (id)fetchAllObjects;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)deleteObjectsWithLimits:(id)a0;
- (void)deleteAllObjects;
- (id)predicateForCallKind:(id)a0;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)updateAllObjects:(id)a0;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)insertRecordsWithoutTransactions:(id)a0;
- (void)initDBHandle;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)insert:(id)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)fetchObjectsWithLimits:(id)a0;
- (id)predicateForCallKinds:(id)a0;
- (void)resetTimers;
- (void)insertWithoutTransaction:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)updateObjects:(id)a0;
- (void)addUpdateTransactions:(id)a0;
- (long long)deleteCallsWithPredicate:(id)a0 error:(id *)a1;
- (id)fetchObjectWithUniqueId:(id)a0;
- (double)timerOutgoing;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 error:(id *)a2;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)predicateForLimits:(id)a0;
- (id)archiveCallObject:(id)a0;
- (double)timerLifetime;

@end
