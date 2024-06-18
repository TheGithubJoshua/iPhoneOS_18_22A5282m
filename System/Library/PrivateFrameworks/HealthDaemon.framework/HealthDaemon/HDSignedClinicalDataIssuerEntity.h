@interface HDSignedClinicalDataIssuerEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)allProperties;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;

@end
