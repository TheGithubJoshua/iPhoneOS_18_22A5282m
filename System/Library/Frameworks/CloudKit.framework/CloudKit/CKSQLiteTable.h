@class CKSQLiteDatabase, NSString, NSArray, NSMutableDictionary, CKSQLiteTableGroup;

@interface CKSQLiteTable : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    CKSQLiteDatabase *_strongDB;
    NSMutableDictionary *_compiledStatementsByLabel;
    struct { struct _opaque_pthread_t *accessThread; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; } _serializer;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_transactionThread;
}

@property (weak, nonatomic) CKSQLiteTableGroup *tableGroup;
@property (readonly, copy, nonatomic) NSString *logicalTableName;
@property (readonly, copy, nonatomic) NSString *dbTableName;
@property (readonly, nonatomic) NSArray *primaryKeyProperties;
@property (nonatomic) BOOL logOperations;

+ (id)allPropertyNames;
+ (Class)entryClass;
+ (unsigned long long)dbVersion;
+ (id)dbProperties;
+ (void)enumeratePropertyDataWithBlock:(id /* block */)a0;
+ (void)decodeEntry:(id)a0 withCoder:(id)a1;
+ (id)descriptionOfEntry:(id)a0;
+ (id)descriptionOfProperties:(id)a0 from:(id)a1;
+ (void)encodeEntry:(id)a0 withCoder:(id)a1;
+ (BOOL)entriesHaveEqualProperties:(id)a0 other:(id)a1 includePrimaryKeys:(BOOL)a2;
+ (void)enumerateClassPropertyDictionariesWithBlock:(id /* block */)a0;
+ (unsigned int)propertyCount;
+ (id)propertyType:(id)a0;
+ (void)setValue:(id)a0 forProperty:(id)a1 inObject:(id)a2;
+ (id)valueForProperty:(id)a0 inObject:(id)a1;

- (id)db;
- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count:(id *)a0;
- (id)dataValueForKey:(id)a0;
- (id)finishInitializing:(BOOL)a0;
- (void)setDb:(id)a0;
- (void)performMaintenance;
- (id)dateValueForKey:(id)a0;
- (id)UUIDValueForKey:(id)a0;
- (void)cacheStatement:(id)a0;
- (id)createTableSQL;
- (id)numberValueForKey:(id)a0;
- (id)performTransaction:(id /* block */)a0;
- (id)insertObject:(id)a0;
- (void).cxx_destruct;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (id)initWithLogicalTableName:(id)a0;
- (id)newEntryObject;
- (id)objectValueForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (void)dealloc;
- (id)deleteObject:(id)a0;
- (void)invalidateCachedStatements;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (void)setDbTableName:(id)a0;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)predicateForMatchingPrimaryKeys;
- (void)serializeTable:(id /* block */)a0;
- (void)_addPredicateForMatching:(id)a0 toStatement:(id)a1;
- (id)_bindProperties:(id)a0 valueObject:(id)a1 inStatement:(id)a2 includePrimaryKeys:(BOOL)a3;
- (id)_fetchPropertiesUsingStatement:(id)a0 inObject:(id)a1 matchingDBProperties:(id)a2 label:(id)a3;
- (id)_performEnumerationWithBlock:(id /* block */)a0 usingEnumerator:(id /* block */)a1;
- (id)_performInsertOrUpdateStatement:(id)a0 usingObject:(id)a1;
- (id)_predicateForMatchingProperties:(id)a0;
- (id)_statementForFetchingEntriesMatchingObject:(id)a0 label:(id)a1 error:(id *)a2 setupBlock:(id /* block */)a3;
- (id)_valueDictionaryForProperties:(id)a0 inObject:(id)a1 nilPropertyError:(id *)a2 selForNilPropertyError:(SEL)a3;
- (id)addPredicateToStatement:(id)a0 predicate:(id /* block */)a1;
- (void)assertNotSerialized;
- (void)assertSerialized;
- (id)compiledStatementWithLabel:(id)a0 creationBlock:(id /* block */)a1;
- (unsigned long long)countOfEntriesMatching:(id)a0 label:(id)a1 error:(id *)a2 predicate:(id /* block */)a3;
- (unsigned long long)deleteAllEntries:(id *)a0;
- (unsigned long long)deleteEntriesMatching:(id)a0 label:(id)a1 error:(id *)a2 predicate:(id /* block */)a3;
- (id)deletePrimaryKeyValue:(id)a0;
- (id)entriesMatchingObject:(id)a0 label:(id)a1 error:(id *)a2 setupBlock:(id /* block */)a3;
- (id)entriesWithValues:(id)a0 label:(id)a1 error:(id *)a2 setupBlock:(id /* block */)a3;
- (id)entryEnumerator:(id *)a0;
- (id)entryWithPrimaryKey:(id)a0 fetchProperties:(id)a1 error:(id *)a2;
- (id)entryWithValues:(id)a0 label:(id)a1 error:(id *)a2 setupBlock:(id /* block */)a3;
- (id)enumerateEntriesWithBlock:(id /* block */)a0;
- (id)fetchAllEntries:(id *)a0;
- (id)fetchAllProperties:(id)a0;
- (id)fetchProperties:(id)a0 inObject:(id)a1 matchingDBProperties:(id)a2 label:(id)a3;
- (id)fetchProperties:(id)a0 label:(id)a1 error:(id *)a2;
- (BOOL)hasEntries:(id *)a0;
- (id)insertObject:(id)a0 orUpdateProperties:(id)a1 label:(id)a2;
- (id)maximumValueOfProperty:(id)a0 error:(id *)a1;
- (id)minimumValueOfProperty:(id)a0 error:(id *)a1;
- (id)nonKeyProperties;
- (id)performInTransaction:(id /* block */)a0;
- (id)primaryKeyValuesInEntry:(id)a0;
- (unsigned long long)setProperties:(id)a0 valuesToStore:(id)a1 inEntriesMatching:(id)a2 label:(id)a3 error:(id *)a4 predicate:(id /* block */)a5;
- (void)setValue:(id)a0 forProperty:(id)a1 inObject:(id)a2;
- (long long)sizeOfProperty:(id)a0 error:(id *)a1;
- (long long)sizeOfProperty:(id)a0 inEntriesMatching:(id)a1 label:(id)a2 error:(id *)a3 predicate:(id /* block */)a4;
- (long long)sizeOfProperty:(id)a0 inEntry:(id)a1 label:(id)a2 error:(id *)a3;
- (id)statementForFetchingProperties:(id)a0 inEntriesMatchingColumns:(id)a1 error:(id *)a2;
- (long long)sumOfProperty:(id)a0 error:(id *)a1;
- (long long)sumOfProperty:(id)a0 inEntriesMatching:(id)a1 label:(id)a2 error:(id *)a3 predicate:(id /* block */)a4;
- (id)updateProperties:(id)a0 usingObject:(id)a1 label:(id)a2;
- (id)updateUsingObject:(id)a0;
- (id)valueForProperty:(id)a0 inObject:(id)a1;

@end
