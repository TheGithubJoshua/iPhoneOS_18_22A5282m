@class NSData, CKSQLiteTOCTable, NSString, CKSQLiteTOCTableGroupTable, NSDate, NSMutableArray, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    struct sqlite3 { } *_db;
    struct { struct _opaque_pthread_t *accessThread; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; } _serializer;
    unsigned int _savepointNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    _Atomic int _tableOrGroupCount;
    NSObject<OS_dispatch_group> *_databaseGroup;
    NSDate *_activityCoalesceDate;
}

@property (readonly, nonatomic) NSData *uniquingKey;
@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) CKSQLiteTOCTable *tocTable;
@property (readonly, nonatomic) CKSQLiteTOCTableGroupTable *tableGroupTable;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;
@property (readonly, nonatomic) int options;

+ (id)uniquingKeyForDatabaseDirectory:(id)a0;
+ (id)unarchivedObjectFromDatabaseArchive:(id)a0;
+ (void)initialize;
+ (void)removeLegacyDatabaseAtPath:(id)a0;
+ (id)databaseInDirectory:(id)a0 error:(id *)a1;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (unsigned long long)openDatabaseCount;
+ (id)databaseArchiveWithObject:(id)a0;
+ (id)databaseInDirectory:(id)a0 options:(int)a1 error:(id *)a2;

- (unsigned long long)changeCount;
- (id)_pruneTables;
- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)sqlErrorWithMessage:(id)a0;
- (id)allTableNames:(id *)a0;
- (id)bootstrap;
- (id)dataValueForKey:(id)a0;
- (void)assertDbSerialized;
- (id)openExistingDatabase;
- (id)removeDatabaseDirectory;
- (id)dateValueForKey:(id)a0;
- (id)UUIDValueForKey:(id)a0;
- (id)dropTable:(id)a0;
- (void *)serializer;
- (id)validateOpenDatabase;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)performTOCTransaction:(id /* block */)a0;
- (id)numberValueForKey:(id)a0;
- (id)initWithDatabaseDirectory:(id)a0 options:(int)a1;
- (void).cxx_destruct;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (id)executeSQL:(id)a0;
- (id)description;
- (long long)lastInsertRowID;
- (id)objectValueForKey:(id)a0;
- (void)forceClosedForUnitTest;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;
- (id)_validateVersionNumbers;
- (void)setupDatabaseConnection;
- (id)stringValueForKey:(id)a0;
- (void)serializeDatabase:(id /* block */)a0;
- (id)createNewDatabase;
- (void)assertDbNotSerialized;
- (void)tableGroupPassedValidation:(id)a0;
- (void)dealloc;
- (void)removeValidatedTableGroup:(id)a0;
- (void)closeDatabase;
- (void)invalidateCachedStatements;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (void)assertInTransaction;
- (void)incrementTableOrGroupCount;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (id)databaseFilePath;
- (void)decrementTableOrGroupCount;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;

@end
