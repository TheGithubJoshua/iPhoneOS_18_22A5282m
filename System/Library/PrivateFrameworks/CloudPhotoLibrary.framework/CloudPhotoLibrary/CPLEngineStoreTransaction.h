@class CPLTransaction, NSString, NSThread, CPLEngineWriteTransactionBlocker, NSError, CPLEngineStore, NSMutableArray;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (BOOL)do:(id /* block */)a0;
- (BOOL)canWrite;
- (id)redactedDescription;
- (BOOL)_forWrite;
- (void)addCleanupBlock:(id /* block */)a0;
- (void)_releaseDirty;
- (void)_transactionDidFinish;
- (id)initForWrite:(BOOL)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)_transactionWillBeginOnThread:(id)a0;
- (BOOL)canRead;

@end
