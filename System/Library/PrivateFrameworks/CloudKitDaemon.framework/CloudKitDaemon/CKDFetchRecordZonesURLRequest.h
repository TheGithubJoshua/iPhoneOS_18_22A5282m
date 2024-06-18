@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;
- (BOOL)requiresCKAnonymousUserIDs;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;

@end
