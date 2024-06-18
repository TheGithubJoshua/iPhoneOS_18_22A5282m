@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    void *_ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}

- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)transactionTypeForWriting;
- (void)dealloc;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (int)configureSQLConnection;

@end
