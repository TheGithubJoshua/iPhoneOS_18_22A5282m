@class NSURLSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMURLRequestSession : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _requireIDSHost;
}

@property (class, readonly, nonatomic) IMURLRequestSession *sharedSession;
@property (class, readonly, nonatomic) IMURLRequestSession *sharedSessionRequiringIDSHost;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConfiguration:(id)a0 queue:(id)a1 requiresIDSHost:(BOOL)a2;

- (void)finishTasksAndInvalidate;
- (void)performRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 queue:(id)a1 requiresIDSHost:(BOOL)a2;
- (void)performRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;

@end
