@class NSMutableArray, NSMapTable, NSError, ICSQLiteConnectionOptions, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ICSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;
@property (readonly, copy, nonatomic) NSNumber *userVersion;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)_finalizeAllStatements;
- (BOOL)_close;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (BOOL)setUserVersion:(id)a0;
- (BOOL)_performResetAfterCorruptionError;
- (void)_flushAfterTransactionBlocks;
- (void)performTransaction:(id /* block */)a0;
- (BOOL)resetAfterCorruptionError;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)open;
- (BOOL)_open;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (id)initWithOptions:(id)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)truncate;
- (BOOL)close;
- (BOOL)resetAfterIOError;

@end
