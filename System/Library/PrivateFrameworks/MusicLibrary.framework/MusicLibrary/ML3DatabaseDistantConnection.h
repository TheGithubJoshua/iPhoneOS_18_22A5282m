@class MLMediaLibraryService, NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    BOOL _connectionOpen;
}

@property (weak, nonatomic) id<ML3DatabaseDistantConnectionDelegate> distantDelegate;

- (BOOL)isReadOnly;
- (BOOL)isOpen;
- (void)setReadOnly:(BOOL)a0;
- (void)_serviceTerminatedTransactionNotification:(id)a0;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)a0;
- (BOOL)_openWithFlags:(int)a0;
- (int)checkpointDatabase;
- (BOOL)shouldCacheStatements;
- (id)currentTransactionID;
- (id)initWithDatabasePath:(id)a0;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0 isRetry:(BOOL)a1;
- (BOOL)_internalExecuteUpdate:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 functionPointer:(void /* function */ *)a2 userData:(void *)a3;
- (BOOL)registerModule:(id)a0;
- (id)_internalExecuteQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (void)dealloc;
- (id)openBlobInTable:(id)a0 column:(id)a1 row:(long long)a2 readOnly:(BOOL)a3;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0;
- (struct sqlite3 { } *)_sqliteHandle;
- (BOOL)close;

@end
