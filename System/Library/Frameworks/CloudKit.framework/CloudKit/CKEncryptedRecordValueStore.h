@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (void)_setObject:(id)a0 forKey:(id)a1;
- (BOOL)isEncrypted;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setCompatibilityModeObjectNoValidate:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;

@end
