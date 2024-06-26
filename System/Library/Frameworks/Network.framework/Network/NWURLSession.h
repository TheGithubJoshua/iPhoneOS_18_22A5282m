@class NSObject, NSString, NWURLSessionDelegateWrapper, NSOperationQueue, NSURLSessionConfiguration, NSHashTable, NSMutableSet;
@protocol OS_dispatch_queue, OS_nw_context, NSURLSessionDelegate;

@interface NWURLSession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL _invalidated;
    NSURLSessionConfiguration *_internalConfiguration;
    unsigned long long _nextTaskIdentifier;
    NSHashTable *_weakUnresumedTasks;
    NSMutableSet *_runningTasks;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    NSObject<OS_nw_context> *_context;
}

@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly, nonatomic) id<NSURLSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;

+ (void)_disableAppSSO;
+ (void)_strictTrustEvaluate:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)finishTasksAndInvalidate;
- (id)downloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataTaskWithRequest:(id)a0;
- (id)dataTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (BOOL)isKindOfClass:(Class)a0;
- (id)downloadTaskWithURL:(id)a0;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (void)invalidateAndCancel;
- (id)downloadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (id)downloadTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (id)dataTaskWithURL:(id)a0;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (id)downloadTaskWithResumeData:(id)a0;
- (id)downloadTaskWithRequest:(id)a0;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1 completionHandler:(id /* block */)a2;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)_dataTaskWithRequest:(id)a0 delegate:(id)a1;
- (id)_dataTaskWithRequest:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_dataTaskWithURL:(id)a0 delegate:(id)a1;
- (id)_dataTaskWithURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithRequest:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithResumeData:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_uploadTaskWithRequest:(id)a0 fromData:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)_uploadTaskWithRequest:(id)a0 fromFile:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)webSocketTaskWithURL:(id)a0 protocols:(id)a1;
- (id)streamTaskWithHostName:(id)a0 port:(long long)a1;
- (id)streamTaskWithNetService:(id)a0;
- (id)webSocketTaskWithRequest:(id)a0;
- (id)webSocketTaskWithURL:(id)a0;

@end
