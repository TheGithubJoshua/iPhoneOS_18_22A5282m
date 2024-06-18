@interface HDAdHocConceptEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)adHocConceptForIdentifier:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)generateAdHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)deleteNonIndexedConceptsWithTransaction:(id)a0 error:(id *)a1;
+ (id)adHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;

@end
