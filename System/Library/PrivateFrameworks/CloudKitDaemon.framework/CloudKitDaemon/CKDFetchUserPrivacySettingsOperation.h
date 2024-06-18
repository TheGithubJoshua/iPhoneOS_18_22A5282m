@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (void)main;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_handleRetrievedPrivacySettings:(id)a0;

@end
