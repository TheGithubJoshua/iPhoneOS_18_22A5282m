@interface HDKeyValueEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (long long)_deviceLocalCategory;
+ (const char *)_insertStatementKey;
+ (Class)_entityClassForKeyValueCategory:(long long)a0;
+ (BOOL)_enumerateKeyValueEntitiesInCategory:(long long)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (BOOL)_insertCodableCategoryDomainDictionary:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)_insertCodableTimestampedKeyValuePairs:(id)a0 domain:(id)a1 category:(long long)a2 provenance:(long long)a3 syncIdentity:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)_insertCodableTimestampedKeyValuePairs:(id)a0 domain:(id)a1 category:(long long)a2 provenance:(long long)a3 syncIdentity:(long long)a4 updatePolicy:(long long)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)_insertKeysAndValues:(id)a0 modificationDate:(id)a1 domain:(id)a2 category:(long long)a3 provenance:(long long)a4 syncIdentity:(long long)a5 updatePolicy:(long long)a6 profile:(id)a7 error:(id *)a8;
+ (BOOL)_insertValues:(id)a0 forKeys:(id)a1 modificationDates:(id)a2 domain:(id)a3 category:(long long)a4 provenance:(long long)a5 syncIdentity:(long long)a6 updatePolicy:(long long)a7 profile:(id)a8 error:(id *)a9;
+ (id)_modDateForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (id)_rawValuesForKeys:(id)a0 domain:(id)a1 category:(long long)a2 database:(id)a3 error:(id *)a4;
+ (BOOL)_setRawKeysAndValues:(id)a0 domain:(id)a1 category:(long long)a2 syncIdentity:(long long)a3 database:(id)a4 error:(id *)a5;
+ (id)allValuesForDomain:(id)a0 category:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)dataForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (id)dateComponentsForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (id)dateForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (BOOL)enumerateValuesForDomain:(id)a0 category:(long long)a1 keys:(id)a2 profile:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (id)generateNewDatabaseIdentifier;
+ (id)modificationDatesForKeys:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)numberForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (id)okemoZursObjectAnchorWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)persistDatabaseIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)persistDatabaseIdentifier:(id)a0 syncIdentity:(long long)a1 database:(id)a2 error:(id *)a3;
+ (id)quantityForKey:(id)a0 unit:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 entity:(id *)a5 error:(id *)a6;
+ (BOOL)removeValuesForDomain:(id)a0 category:(long long)a1 keys:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)retrieveDatabaseIdentifierCreationDateFromProfile:(id)a0 error:(id *)a1;
+ (id)retrieveDatabaseIdentifierFromDatabase:(id)a0 error:(id *)a1;
+ (id)retrieveDatabaseIdentifierFromProfile:(id)a0 error:(id *)a1;
+ (BOOL)setData:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setData:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 syncIdentity:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)setDate:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setDateComponents:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setNumber:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setOkemoZursObjectAnchor:(long long)a0 syncIdentity:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)setQuantity:(id)a0 unit:(id)a1 forKey:(id)a2 domain:(id)a3 category:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)setString:(id)a0 forKey:(id)a1 domain:(id)a2 category:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setValueForAllKeys:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)setValuesWithDictionary:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)stringForKey:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 entity:(id *)a4 error:(id *)a5;
+ (id)valuesForKeys:(id)a0 domain:(id)a1 category:(long long)a2 profile:(id)a3 error:(id *)a4;

@end
