@class NSURL, NSURLSessionTask, AMSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AMSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isAsynchronous;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setQueuePriority:(long long)a0;
- (BOOL)isFinished;
- (void)_didCompleteTaskWithResult:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (id)initWithURL:(id)a0 URLSession:(id)a1;

@end
