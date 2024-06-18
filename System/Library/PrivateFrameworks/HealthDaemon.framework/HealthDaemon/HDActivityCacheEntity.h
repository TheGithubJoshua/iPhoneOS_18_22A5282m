@interface HDActivityCacheEntity : HDSampleEntity

+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)databaseTable;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)activityCacheForIndex:(long long)a0 profile:(id)a1 encodingOptions:(id)a2 error:(id *)a3;
+ (BOOL)supportsObjectMerging;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (BOOL)isConcreteEntity;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)indices;

@end
