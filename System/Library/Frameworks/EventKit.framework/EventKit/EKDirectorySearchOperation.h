@class NSError, NSString, EKDirectorySearchQuery;

@interface EKDirectorySearchOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    id /* block */ _resultsBlock;
    id _searchID;
}

@property (nonatomic) BOOL numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

+ (BOOL)isSupported;

- (void)main;
- (id)init;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void)start;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)_recordTypes;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;
- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;

@end
