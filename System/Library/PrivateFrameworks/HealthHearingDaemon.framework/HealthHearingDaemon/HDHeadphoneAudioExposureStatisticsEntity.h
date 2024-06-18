@interface HDHeadphoneAudioExposureStatisticsEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)_replaceExistingWithBuckets:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)insertBucket:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (BOOL)insertBuckets:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_loadBucketsFromProfile:(id)a0 error:(id *)a1;
+ (id)_sortOrderingTerms;
+ (id)_bucketFromAllPropertiesRow:(struct HDSQLiteRow { } *)a0 profile:(id)a1 error:(id *)a2;
+ (id)_pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_enumerateBucketsForProfile:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)indices;

- (id)_bucketWithProfile:(id)a0 error:(id *)a1;

@end