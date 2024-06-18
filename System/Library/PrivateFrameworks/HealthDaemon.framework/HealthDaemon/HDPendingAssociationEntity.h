@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)indices;

@end
