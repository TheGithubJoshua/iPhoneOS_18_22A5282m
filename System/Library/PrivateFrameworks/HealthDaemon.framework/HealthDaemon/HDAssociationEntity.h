@interface HDAssociationEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (BOOL)copyAssociationsFromChildID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)deleteStatementForChildIDsWithTransaction:(id)a0;
+ (id)associationUUIDsForObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1 profile:(id)a2;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)deleteStatementForParentIDWithTransaction:(id)a0;
+ (id)tableAliases;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 enforceSameSource:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)indices;
+ (id)privateSubEntities;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;

@end
