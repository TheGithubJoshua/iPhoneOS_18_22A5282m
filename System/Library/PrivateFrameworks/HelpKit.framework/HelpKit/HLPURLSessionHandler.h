@class NSIndexSet, NSString;

@interface HLPURLSessionHandler : NSObject <HLPURLSessionManagerDelegate, HLPURLSessionDelegate>

@property (nonatomic) BOOL shouldIgnoreInMemoryCaching;
@property (retain, nonatomic) NSIndexSet *excludeCachingDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setRootViewController:(id)a0;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)URLSessionManagerDidReceiveChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)URLSessionManagerSessionConfiguration:(id)a0;
- (id)URLSessionManagerSessionOperationQueue:(id)a0;
- (BOOL)URLSessionManagerShouldCoalesceRequest:(id)a0;
- (id)cacheControllerForDataType:(long long)a0;
- (id)processJSONFormattedDataForCDSError:(id)a0;
- (BOOL)respectCachingForRequest:(id)a0;
- (void)sessionTask:(id)a0 didCompleteWithError:(id)a1;
- (void)sessionTask:(id)a0 didFinishDownloadingToURL:(id)a1;
- (void)sessionTask:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)sessionTask:(id)a0 didReceiveResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)sessionTask:(id)a0 willCacheResponse:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldCacheToDiskForSessionTask:(id)a0;
- (void)URLSessionManagerRequestCompleted:(id)a0 sessionTask:(id)a1;
- (void)URLSessionManagerRequestResumed:(id)a0 sessionTask:(id)a1;

@end
