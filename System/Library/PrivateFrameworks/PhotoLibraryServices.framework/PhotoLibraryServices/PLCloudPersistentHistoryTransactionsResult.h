@class NSString, NSArray, NSPersistentHistoryToken, PLPersistentHistoryTransactionIterator;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    id /* block */ _isTransactionSyncableFilter;
}

@property (readonly) long long resultType;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchTransactionsSinceToken:(id)a0 inContext:(id)a1;
+ (id /* block */)_isTransactionNonCoalescingFilter;
+ (id /* block */)_isTransactionSyncableFilter;

- (void)enumerateLocalEventsWithBlock:(id /* block */)a0;
- (void)_updateLastProcessedCoreDataToken;
- (id)initWithUnsuccessfulResultType:(long long)a0;
- (void)_sendLocalEvent:(id)a0 toEnumerationBlock:(id /* block */)a1;
- (id)initWithResultType:(long long)a0 transactionIterator:(id)a1;
- (void).cxx_destruct;
- (id)_nextLocalEventUpToNonCoalescableTransaction;
- (id)initWithSuccesfulTransactionIterator:(id)a0;

@end
