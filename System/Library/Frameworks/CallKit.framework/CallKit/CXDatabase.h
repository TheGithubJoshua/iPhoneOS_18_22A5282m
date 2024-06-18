@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) NSMutableDictionary *sqlQueryToStatements;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (readonly, nonatomic) int countOfRecordsModifiedByLastQuery;

- (id)init;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 transient:(BOOL)a2 error:(id *)a3;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 transient:(BOOL)a3 resultRowHandler:(id /* block */)a4 error:(id *)a5;
- (BOOL)performTransactionWithBlock:(id /* block */)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)setBusyTimeout:(double)a0 error:(id *)a1;
- (id)_statementForSQL:(id)a0 transient:(BOOL)a1 error:(id *)a2;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withBindings:(id)a1 transient:(BOOL)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)dealloc;
- (id)namesOfColumnsInTableWithName:(id)a0 error:(id *)a1;
- (BOOL)enableForeignKeysWithError:(id *)a0;
- (BOOL)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 resultRowHandler:(id /* block */)a3 error:(id *)a4;
- (BOOL)vacuumWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withBindings:(id)a1 error:(id *)a2;

@end
