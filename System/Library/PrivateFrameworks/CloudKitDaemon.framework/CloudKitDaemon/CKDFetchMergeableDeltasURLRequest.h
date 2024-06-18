@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID;
@property (readonly, nonatomic) NSDictionary *previousContinuationTokens;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 previousContinuationTokens:(id)a2;
- (id)anonymousUserIDForHTTPHeader;

@end
