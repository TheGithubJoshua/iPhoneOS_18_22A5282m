@class NSString, NSURLRequest, NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;

+ (BOOL)canHandleRequest:(id)a0;
+ (id)sendSynchronousRequest:(id)a0 returningResponse:(id *)a1 error:(id *)a2;
+ (id)connectionWithRequest:(id)a0 delegate:(id)a1;
+ (void)_collectTimingDataWithOptions:(unsigned long long)a0;
+ (BOOL)_collectsTimingData;
+ (void)_setCollectsTimingData:(BOOL)a0;
+ (void)_setLoaderThreadPriority:(int)a0;
+ (void)_setMIMETypesWithNoSizeLimit:(id)a0;
+ (void)_setSweeperInterval:(unsigned long long)a0;
+ (unsigned long long)_sweeperInterval;
+ (unsigned long long)_timingDataOptions;
+ (struct __CFRunLoop { } *)resourceLoaderRunLoop;
+ (void)sendAsynchronousRequest:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)_timingData;
- (id)_initWithRequest:(id)a0 delegate:(id)a1 usesCache:(BOOL)a2 maxContentLength:(long long)a3 startImmediately:(BOOL)a4 connectionProperties:(id)a5;
- (id)_dlInternal;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)setDelegateQueue:(id)a0;
- (id)connectionProperties;
- (void)cancel;
- (void)download;
- (id)_cfInternal;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)start;
- (void)cancelAuthenticationChallenge:(id)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (BOOL)defersCallbacks;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (void)_suspendLoading;
- (void)dealloc;
- (void)setDefersCallbacks:(BOOL)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)_resumeLoading;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;

@end
