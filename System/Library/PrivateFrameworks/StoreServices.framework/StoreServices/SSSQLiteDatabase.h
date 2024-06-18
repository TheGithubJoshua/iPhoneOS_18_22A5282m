@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _shouldAttemptToReopenDB;
    BOOL _isInTransaction;
    NSString *_protectionType;
    struct __CFDictionary { } *_statementCache;
    BOOL _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

@property BOOL takesTaskCompletionAssertions;
@property (copy, nonatomic) id /* block */ setupBlock;

+ (void)_setTakesTaskCompletionAssertions:(BOOL)a0;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
+ (void)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(BOOL *)a1 didFinish:(BOOL *)a2 isCorrupt:(BOOL *)a3;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;

- (void)_accessDatabaseUsingBlock:(id /* block */)a0;
- (void)dispatchBlockSync:(id /* block */)a0;
- (void)_endTaskCompletionAssertion;
- (BOOL)setUserVersion:(long long)a0 forDatabase:(id)a1;
- (id)_openDatabaseIfNotOpen;
- (struct sqlite3_stmt { } *)_statementForSQL:(id)a0 cache:(BOOL)a1;
- (id)initWithDatabaseURL:(id)a0;
- (int)_closeDatabaseIfOpen;
- (void)expireBackgroundTask;
- (long long)userVersion;
- (BOOL)setUserVersion:(long long)a0;
- (long long)countChanges;
- (void)_resetCorruptDatabase;
- (long long)userVersionForDatabase:(id)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (void)dispatchBlockAsync:(id /* block */)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)columnName:(id)a0 existsInTable:(id)a1;
- (BOOL)executeSQL:(id)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1 protectionType:(id)a2;
- (void)_beginTaskCompletionAssertion;
- (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
- (void)endTaskCompletionAssertion;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (int)_openFlags;
- (void)dealloc;
- (void)beginTaskCompletionAssertion;
- (void)_expireBackgroundTask;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { } *)a0;
- (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;
- (void)accessDatabaseUsingBlock:(id /* block */)a0;
- (void)prepareStatementForSQL:(id)a0 cache:(BOOL)a1 usingBlock:(id /* block */)a2;
- (int)_resetAndReopenDatabaseWithPath:(id)a0;
- (void)_resetDatabaseWithPath:(id)a0;

@end
