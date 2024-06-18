@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (void)main;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)_handleRecordArchived:(id)a0 responseCode:(id)a1;

@end
