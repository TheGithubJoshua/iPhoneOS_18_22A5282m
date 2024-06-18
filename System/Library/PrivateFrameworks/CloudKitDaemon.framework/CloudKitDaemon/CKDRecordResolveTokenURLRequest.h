@class NSArray, NSMutableDictionary, CKDProtocolTranslator, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) CKDProtocolTranslator *privateDBTranslator;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) id /* block */ tokenResolveBlock;

- (id)requestOperationClasses;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (id)initWithOperation:(id)a0 shortTokenLookupInfos:(id)a1;
- (BOOL)sendRequestAnonymously;

@end
