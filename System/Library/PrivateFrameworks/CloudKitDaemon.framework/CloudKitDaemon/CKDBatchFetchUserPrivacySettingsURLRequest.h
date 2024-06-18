@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
