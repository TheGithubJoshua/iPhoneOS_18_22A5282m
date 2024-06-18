@class NSURL, NSString, _MSVSQLConnection;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    _MSVSQLConnection *_connection;
}

@property (copy, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)registerFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (id)markdownTableForSQL:(id)a0;
- (id)markdownTableForStatement:(id)a0;
- (id)initWithMemory;
- (id)markdownTableForTableNamed:(id)a0;
- (id)resultsForStatement:(id)a0;
- (void)unregisterFunctionNamed:(id)a0 arguments:(long long)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)registerAggregateFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 start:(id /* block */)a3 add:(id /* block */)a4 remove:(id /* block */)a5 value:(id /* block */)a6;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (id)transactionWithName:(id)a0 error:(id *)a1;
- (id)statementWithString:(id)a0 error:(id *)a1;

@end
