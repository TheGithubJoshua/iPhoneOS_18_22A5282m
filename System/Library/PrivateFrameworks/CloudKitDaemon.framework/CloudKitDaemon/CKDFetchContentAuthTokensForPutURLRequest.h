@class NSDictionary, CKDAssetTokenRequest, NSMapTable;

@interface CKDFetchContentAuthTokensForPutURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (retain, nonatomic) NSMapTable *transactionStateByRequestIDs;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL useEncryption;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 assetTokenRequest:(id)a1 headers:(id)a2;

@end
