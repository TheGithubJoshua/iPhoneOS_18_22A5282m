@class NSString, NSMutableSet;
@protocol FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
}

@property (weak, nonatomic) id<FBSynchronizedTransactionGroupDelegate> synchronizationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_childTransactionDidComplete:(id)a0;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (id)init;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (void)addSynchronizedTransaction:(id)a0;
- (BOOL)isReadyForSynchronizedCommit;
- (BOOL)_canBeInterrupted;
- (id)synchronizedTransactions;
- (void)_didComplete;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (void)_performSynchronizedCommitIfReady;
- (void)performSynchronizedCommit;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (void).cxx_destruct;
- (void)_performSynchronizedCommit:(id)a0;

@end
