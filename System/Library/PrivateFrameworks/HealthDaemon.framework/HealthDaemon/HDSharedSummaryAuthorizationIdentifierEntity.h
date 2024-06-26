@interface HDSharedSummaryAuthorizationIdentifierEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (id)insertWithSummaryID:(long long)a0 authorizationIdentifiers:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (id)authorizationIdentifiersForSummaryID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;

@end
