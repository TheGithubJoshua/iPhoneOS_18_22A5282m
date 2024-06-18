@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (BOOL)setBadge:(id)a0 forDomain:(long long)a1 profile:(id)a2 error:(out id *)a3;
+ (const char *)_insertStatementKey;
+ (id)badgeForDomain:(long long)a0 profile:(id)a1 error:(out id *)a2;

@end
