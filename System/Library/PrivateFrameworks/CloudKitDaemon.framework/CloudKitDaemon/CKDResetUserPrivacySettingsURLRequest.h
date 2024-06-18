@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
