@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (BOOL)enumerateDataSourcesForWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)removeDataSourceWithIdentifier:(id)a0 fromWorkoutBuilder:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)storeDataSourceWithIdentifier:(id)a0 archivedState:(id)a1 workoutBuilder:(id)a2 transaction:(id)a3 error:(id *)a4;

@end
