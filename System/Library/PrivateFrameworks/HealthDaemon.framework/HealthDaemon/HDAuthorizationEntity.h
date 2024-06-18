@interface HDAuthorizationEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)uniquedColumns;
+ (id)authorizationRecordsBySourceForType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)modificationDateForSourceEntity:(id)a0 type:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (BOOL)setAuthorizationStatuses:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetAllAuthorizationStatusesWithProfile:(id)a0 error:(id *)a1;
+ (id)allSourcesRequestingTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationStatusesForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)setAuthorizationStatuses:(id)a0 authorizationRequests:(id)a1 authorizationModes:(id)a2 sourceEntity:(id)a3 options:(unsigned long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;

@end
