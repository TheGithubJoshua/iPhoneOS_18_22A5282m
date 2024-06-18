@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ quotaFetchedBlock;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;

@end
