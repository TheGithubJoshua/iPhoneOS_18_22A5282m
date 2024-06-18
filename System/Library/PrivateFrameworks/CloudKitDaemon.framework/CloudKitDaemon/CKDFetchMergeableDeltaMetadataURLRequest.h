@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSDictionary *continuationTokens;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (int)isolationLevel;
- (id)anonymousUserIDForHTTPHeader;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 continuationTokens:(id)a2;

@end
