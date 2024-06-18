@class NSString, NSURLSession, NSOperationQueue, NSDictionary, NSMutableDictionary, NSObject, NSURLSessionConfiguration;
@protocol OS_os_log, OS_dispatch_queue, ACSURLSessionDelegate;

@interface ACSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>

@property (class, readonly) ACSURLSession *sharedSession;

@property BOOL canUseCachingServer;
@property (retain) NSObject<OS_os_log> *_logHandle;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property (retain) NSURLSession *_nsurlSession;
@property (retain) NSDictionary *_locateOptions;
@property (retain) id<ACSURLSessionDelegate> _clientDelegate;
@property (retain) NSOperationQueue *_clientDelegateOpQueue;
@property (retain) NSMutableDictionary *_tasks;
@property int _phase;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, retain) id<ACSURLSessionDelegate> delegate;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSDictionary *locateOptions;
@property (copy) NSString *sessionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConfiguration:(id)a0 canUseCachingServer:(BOOL)a1 locateOptions:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
+ (id)sessionWithConfiguration:(id)a0 canUseCachingServer:(BOOL)a1 locateOptions:(id)a2;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (id)_errorWithResumeDataFromError:(id)a0 originalRequest:(id)a1 currentRequest:(id)a2;
- (id)downloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 willBeginDelayedRequest:(id)a2 completionHandler:(id /* block */)a3;
- (void)_addTask:(id)a0;
- (id)dataTaskWithRequest:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (id)dataTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1 completionHandler:(id /* block */)a2;
- (id)downloadTaskWithURL:(id)a0;
- (void)_copyAttributesFromNSURLTask:(id)a0 toNSURLTask:(id)a1;
- (id)_linkedLocationWithLocation:(id)a0;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (void)invalidateAndCancel;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 streamTask:(id)a1 didBecomeInputStream:(id)a2 outputStream:(id)a3;
- (BOOL)_resumeData:(id)a0 toNSURLResumeData:(id *)a1 originalRequest:(id *)a2 currentRequest:(id *)a3 error:(id *)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)downloadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_locateCachingServerForURL:(id)a0 isUpload:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_onqueue_resumeTask:(id)a0;
- (void)_dataTask:(id)a0 completedWithData:(id)a1 response:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (id)downloadTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 readClosedForStreamTask:(id)a1;
- (void)_onqueue_task:(id)a0 willUseCachingServer:(BOOL)a1 newRequest:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithURL:(id)a0;
- (void)_removeTask:(id)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)_onqueue_taskForNSURLTask:(id)a0;
- (void)URLSession:(id)a0 betterRouteDiscoveredForStreamTask:(id)a1;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)_keyForNSURLTask:(id)a0;
- (void)_cancelTask:(id)a0;
- (void)URLSession:(id)a0 writeClosedForStreamTask:(id)a1;
- (id)_resumeDataWithNSURLResumeData:(id)a0 originalRequest:(id)a1 currentRequest:(id)a2 error:(id *)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeStreamTask:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_onqueue_addTask:(id)a0 forNSURLTask:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (void)dealloc;
- (id)downloadTaskWithResumeData:(id)a0;
- (void)_cancelDownloadTask:(id)a0 byProducingResumeData:(id /* block */)a1;
- (void)_resumeTask:(id)a0;
- (void)_downloadTask:(id)a0 completedWithLocation:(id)a1 response:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (id)downloadTaskWithRequest:(id)a0;
- (id)_downloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1 completionHandler:(id /* block */)a2;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (void)_onqueue_removeTaskForNSURLTask:(id)a0;
- (id)_onqueue_uniqueTasks;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0 canUseCachingServer:(BOOL)a1 locateOptions:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (void)_suspendTask:(id)a0;

@end