@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (id)init;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (id)initWithDatabase:(id)a0;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cachedStatementForQuery:(id)a0;

@end
