@interface HDSyncIdentityEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (id)concreteIdentityForIdentity:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)a0 database:(id)a1 error:(id *)a2;

- (id)concreteIdentityWithTransaction:(id)a0 error:(id *)a1;

@end
