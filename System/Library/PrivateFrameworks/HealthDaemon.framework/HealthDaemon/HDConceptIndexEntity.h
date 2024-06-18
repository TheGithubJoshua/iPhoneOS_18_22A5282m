@interface HDConceptIndexEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (BOOL)insertConceptIndexEntries:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateConceptIndexEntriesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)numberOfIndexedConceptsWithProfile:(id)a0 error:(id *)a1;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)protectionClass;
+ (BOOL)removeAllConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (id)indices;
+ (id)conceptIndexEntriesForSampleUUID:(id)a0 type:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)unitTesting_allConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;

@end
