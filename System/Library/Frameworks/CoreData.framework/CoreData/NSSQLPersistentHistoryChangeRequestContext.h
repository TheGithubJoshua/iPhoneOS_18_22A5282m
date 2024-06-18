@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (BOOL)isWritingRequest;
- (id)createCountRequestContextForChanges;
- (void)dealloc;
- (id)fetchRequestContextForChanges;
- (void)executePrologue;
- (id)createDeleteTransactionsRequestContext;

@end
