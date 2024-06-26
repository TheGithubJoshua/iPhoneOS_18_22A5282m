@class NSString, _MSVSQLConnection, _MSVSQLProcessAssertion;

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {
    BOOL _invalid;
    _MSVSQLConnection *_connection;
    _MSVSQLProcessAssertion *_assertion;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (BOOL)commit;
- (BOOL)_releaseSavepoint:(id)a0;
- (BOOL)rollback;
- (id)resultsForStatement:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)rollbackToSavepoint:(id)a0;
- (id)createSavepoint;
- (id)statementWithString:(id)a0 error:(id *)a1;

@end
