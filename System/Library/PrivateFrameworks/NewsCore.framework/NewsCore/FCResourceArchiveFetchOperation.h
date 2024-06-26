@class NSURL, NSArray, NSURLSessionDownloadTask;
@protocol FCContentContext;

@interface FCResourceArchiveFetchOperation : FCOperation {
    NSURL *_archiveURL;
    id<FCContentContext> _context;
    NSURLSessionDownloadTask *_downloadTask;
    NSArray *_resultResources;
}

@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithArchiveURL:(id)a0 context:(id)a1;

@end
