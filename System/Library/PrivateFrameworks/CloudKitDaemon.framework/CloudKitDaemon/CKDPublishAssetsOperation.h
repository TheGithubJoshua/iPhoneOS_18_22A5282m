@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain) NSOperation *fetchRecordsOperation;
@property (retain, nonatomic) NSMutableDictionary *fetchedRecordsByID;
@property (copy, nonatomic) id /* block */ assetPublishedBlock;
@property (retain, nonatomic) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy;

- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)_checkEntitlements;
- (void)cancel;
- (void).cxx_destruct;
- (void)_dispatchAssetURLsForRecord:(id)a0 pcs:(struct _OpaquePCSShareProtection { } *)a1;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (void)_finishPublishAssetsForRecord:(id)a0;

@end
