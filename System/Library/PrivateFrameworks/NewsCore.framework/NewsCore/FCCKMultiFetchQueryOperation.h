@class NSArray, NSDictionary, NSMutableSet, FCEdgeCacheHint, FCCKContentDatabase, NSMutableArray;

@interface FCCKMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id /* block */ _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableArray *_resultFetchedRecords;
    NSMutableSet *_resultMissingRecordIDs;
}

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
