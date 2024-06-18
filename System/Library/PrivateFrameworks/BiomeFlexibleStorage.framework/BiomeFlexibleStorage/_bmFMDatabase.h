@class NSString, NSMutableDictionary, NSURL, NSMutableSet, NSDateFormatter;

@interface _bmFMDatabase : NSObject {
    void *_db;
    BOOL _isExecutingStatement;
    double _startBusyRetryTime;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}

@property (nonatomic) unsigned int applicationID;
@property (nonatomic) unsigned int userVersion;
@property BOOL traceExecution;
@property BOOL checkedOut;
@property BOOL crashOnErrors;
@property BOOL logsErrors;
@property (retain) NSMutableDictionary *cachedStatements;
@property (nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL goodConnection;
@property (readonly, nonatomic) long long lastInsertRowId;
@property (readonly, nonatomic) int changes;
@property (readonly, nonatomic) BOOL isInTransaction;
@property (readonly, nonatomic) BOOL hasOpenResultSets;
@property (nonatomic) BOOL shouldCacheStatements;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) void *sqliteHandle;
@property (nonatomic) double maxBusyRetryTimeInterval;

+ (id)FMDBUserVersion;
+ (int)FMDBVersion;
+ (id)databaseWithPath:(id)a0;
+ (id)databaseWithURL:(id)a0;
+ (BOOL)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (id)storeableDateFormat:(id)a0;

- (void)setDateFormat:(id)a0;
- (id)lastError;
- (id)init;
- (BOOL)commit;
- (id)initWithURL:(id)a0;
- (BOOL)beginTransaction;
- (id)initWithPath:(id)a0;
- (void)clearCachedStatements;
- (BOOL)interrupt;
- (BOOL)rollback;
- (BOOL)executeUpdate:(id)a0;
- (id)errorWithMessage:(id)a0;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (id)getSchema;
- (id)executeQuery:(id)a0;
- (BOOL)tableExists:(id)a0;
- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;
- (BOOL)open;
- (id)dateFromString:(id)a0;
- (void)dealloc;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (id)cachedStatementForQuery:(id)a0;
- (BOOL)setKey:(id)a0;
- (BOOL)beginExclusiveTransaction;
- (BOOL)close;
- (BOOL)beginDeferredTransaction;
- (id)stringForQuery:(id)a0;
- (id)prepare:(id)a0;
- (double)doubleForQuery:(id)a0;
- (id)getTableSchema:(id)a0;
- (int)limitFor:(int)a0 value:(int)a1;
- (BOOL)setKeyWithData:(id)a0;
- (BOOL)executeUpdate:(id)a0 error:(id *)a1 withArgumentsInArray:(id)a2 orDictionary:(id)a3 orVAList:(char *)a4;
- (BOOL)releaseSavePointWithName:(id)a0 error:(id *)a1;
- (BOOL)beginImmediateTransaction;
- (int)bindObject:(id)a0 toColumn:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (BOOL)bindStatement:(struct sqlite3_stmt { } *)a0 WithArgumentsInArray:(id)a1 orDictionary:(id)a2 orVAList:(char *)a3;
- (BOOL)boolForQuery:(id)a0;
- (int)busyRetryTimeout;
- (BOOL)checkpoint:(int)a0 error:(id *)a1;
- (BOOL)checkpoint:(int)a0 name:(id)a1 error:(id *)a2;
- (BOOL)checkpoint:(int)a0 name:(id)a1 logFrameCount:(int *)a2 checkpointCount:(int *)a3 error:(id *)a4;
- (void)closeOpenResultSets;
- (BOOL)columnExists:(id)a0 columnName:(id)a1;
- (BOOL)columnExists:(id)a0 inTableWithName:(id)a1;
- (id)dataForQuery:(id)a0;
- (BOOL)databaseExists;
- (id)dateForQuery:(id)a0;
- (id)executeQuery:(id)a0 values:(id)a1 error:(id *)a2;
- (id)executeQuery:(id)a0 withArgumentsInArray:(id)a1;
- (id)executeQuery:(id)a0 withArgumentsInArray:(id)a1 orDictionary:(id)a2 orVAList:(char *)a3 shouldBind:(BOOL)a4;
- (id)executeQuery:(id)a0 withParameterDictionary:(id)a1;
- (id)executeQuery:(id)a0 withVAList:(char *)a1;
- (id)executeQueryWithFormat:(id)a0;
- (BOOL)executeStatements:(id)a0;
- (BOOL)executeStatements:(id)a0 withResultBlock:(id /* block */)a1;
- (BOOL)executeUpdate:(id)a0 values:(id)a1 error:(id *)a2;
- (BOOL)executeUpdate:(id)a0 withArgumentsInArray:(id)a1;
- (BOOL)executeUpdate:(id)a0 withErrorAndBindings:(id *)a1;
- (BOOL)executeUpdate:(id)a0 withParameterDictionary:(id)a1;
- (BOOL)executeUpdate:(id)a0 withVAList:(char *)a1;
- (BOOL)executeUpdateWithFormat:(id)a0;
- (void)extractSQL:(id)a0 argumentsList:(char *)a1 intoString:(id)a2 arguments:(id)a3;
- (BOOL)hadError;
- (BOOL)hasDateFormatter;
- (id)inSavePoint:(id /* block */)a0;
- (BOOL)inTransaction;
- (int)intForQuery:(id)a0;
- (int)lastExtendedErrorCode;
- (long long)longForQuery:(id)a0;
- (void)makeFunctionNamed:(id)a0 arguments:(int)a1 block:(id /* block */)a2;
- (void)makeFunctionNamed:(id)a0 maximumArguments:(int)a1 withBlock:(id /* block */)a2;
- (BOOL)openWithFlags:(int)a0;
- (BOOL)openWithFlags:(int)a0 vfs:(id)a1;
- (BOOL)rekey:(id)a0;
- (BOOL)rekeyWithData:(id)a0;
- (void)resultData:(id)a0 context:(void *)a1;
- (void)resultDouble:(double)a0 context:(void *)a1;
- (void)resultError:(id)a0 context:(void *)a1;
- (void)resultErrorCode:(int)a0 context:(void *)a1;
- (void)resultErrorNoMemoryInContext:(void *)a0;
- (void)resultErrorTooBigInContext:(void *)a0;
- (void)resultInt:(int)a0 context:(void *)a1;
- (void)resultLong:(long long)a0 context:(void *)a1;
- (void)resultNullInContext:(void *)a0;
- (void)resultSetDidClose:(id)a0;
- (void)resultString:(id)a0 context:(void *)a1;
- (BOOL)rollbackToSavePointWithName:(id)a0 error:(id *)a1;
- (void)setBusyRetryTimeout:(int)a0;
- (const char *)sqlitePath;
- (BOOL)startSavePointWithName:(id)a0 error:(id *)a1;
- (BOOL)update:(id)a0 withErrorAndBindings:(id *)a1;
- (BOOL)validateSQL:(id)a0 error:(id *)a1;
- (id)valueData:(void *)a0;
- (double)valueDouble:(void *)a0;
- (int)valueInt:(void *)a0;
- (long long)valueLong:(void *)a0;
- (id)valueString:(void *)a0;
- (int)valueType:(void *)a0;
- (void)warnInUse;

@end