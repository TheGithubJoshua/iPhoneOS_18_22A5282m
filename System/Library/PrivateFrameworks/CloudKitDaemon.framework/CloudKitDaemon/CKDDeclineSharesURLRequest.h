@class NSArray, NSMutableDictionary;

@interface CKDDeclineSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToDecline;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareDeclinedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 shareMetadatasToDecline:(id)a1;

@end
