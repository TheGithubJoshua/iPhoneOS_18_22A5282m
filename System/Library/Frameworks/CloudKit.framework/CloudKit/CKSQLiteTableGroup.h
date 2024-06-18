@class NSString, NSDictionary, NSDate, NSNumber, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (copy, nonatomic) NSDictionary *groupData;
@property (retain, nonatomic) NSDate *activityDate;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL didCreateDatabaseTables;

+ (double)expirationTime;
+ (BOOL)rebootShouldClearData;
+ (id)_tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2 create:(BOOL)a3;
+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (id)existingTableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (void)expireGroup:(id)a0 reason:(id)a1;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)groupWillExpire:(id)a0;
+ (void)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (BOOL)supportsGroupCreation;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;

- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (long long)validateTables:(id)a0;
- (id)dataValueForKey:(id)a0;
- (id)finishInitializing:(BOOL)a0;
- (BOOL)isInvalid;
- (void)setDb:(id)a0;
- (id)dateValueForKey:(id)a0;
- (id)UUIDValueForKey:(id)a0;
- (id)_purge;
- (id)numberValueForKey:(id)a0;
- (id)updateGroupData:(id)a0;
- (void).cxx_destruct;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (id)description;
- (id)objectValueForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (id)createTables;
- (void)dealloc;
- (void)invalidateCachedStatements;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (BOOL)isExpired;
- (id)performDataMigration;
- (id)initWithName:(id)a0;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)dbTableNameForLogicalTableName:(id)a0;
- (void)_deleteTables;
- (id)_lockTables:(id)a0 andPerformBlock:(id /* block */)a1;
- (id)addTable:(id)a0;
- (id)allTables;
- (id)createDBTables;
- (void)groupWillPurge;
- (id)migrateDataFromGroup:(id)a0;
- (id)performGroupTransaction:(id /* block */)a0;
- (id)tableWithName:(id)a0;
- (void)updateLastUsedDate;

@end
