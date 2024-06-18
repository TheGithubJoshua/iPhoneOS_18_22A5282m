@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;

- (void)main;
- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void).cxx_destruct;

@end
