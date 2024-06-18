@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)checkConstraints;
+ (id)propertyForSyncAnchor;

@end
