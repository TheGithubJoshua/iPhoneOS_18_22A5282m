@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (long long)protectionClass;
+ (long long)_deviceLocalCategory;
+ (const char *)_insertStatementKey;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;

@end
