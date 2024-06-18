@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAcceptedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (BOOL)requiresCKAnonymousSignature;
- (id)initWithOperation:(id)a0 shareMetadatasToAccept:(id)a1;

@end
