@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)saveCompetitionList:(id)a0 profile:(id)a1 withError:(id *)a2;
+ (id)_insertCompetitionList:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (BOOL)removeAllCompetitionListsWithProfile:(id)a0 error:(id *)a1;
+ (long long)protectionClass;
+ (BOOL)enumerateAllCompetitionListsWithProfile:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
+ (BOOL)_insertCompetitionLists:(id)a0 profile:(id)a1 error:(id *)a2;

@end
