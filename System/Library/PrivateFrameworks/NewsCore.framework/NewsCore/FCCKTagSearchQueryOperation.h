@class NSString, NSArray, CKQueryCursor, FCCKContentDatabase, NSError;

@interface FCCKTagSearchQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    unsigned long long _resultsLimit;
    NSString *_searchString;
    long long _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    id /* block */ _queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
