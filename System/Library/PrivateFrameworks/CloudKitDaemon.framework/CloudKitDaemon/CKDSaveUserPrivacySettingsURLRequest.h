@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;
@property (copy, nonatomic) NSString *bundleID;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)initWithOperation:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (long long)databaseScope;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
