@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface CKDFetchRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long recordCount;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (retain, nonatomic) NSArray *desiredIndexedListKeys;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)requestGETPreAuth;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)requestedListFieldsForDesiredIndexedListKeys;
- (id)initWithOperation:(id)a0 recordIDs:(id)a1 recordIDsToEtags:(id)a2 recordIDsToVersionETags:(id)a3 desiredKeys:(id)a4;

@end
