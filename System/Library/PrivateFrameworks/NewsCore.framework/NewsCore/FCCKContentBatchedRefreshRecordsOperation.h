@class NSError, NSArray, CKRecordID, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, FCCKContentDatabase;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    BOOL _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    id /* block */ _refreshRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableSet *_refreshedRecordIDs;
    NSMutableDictionary *_updatedRecordsByRecordID;
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

- (id)init;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
