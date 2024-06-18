@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
    int _cfConnLock;
    struct _CFURLConnection { } *_cfConn;
    struct _CFURLAuthChallenge { } *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString { } *_fileName;
    BOOL _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)_timingData;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)cancel;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)start;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)_setShouldSkipCancelOnRelease:(BOOL)a0;
- (void)_setDelegateQueue:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (void)_suspendLoading;
- (id)initWithInfo:(const struct InternalInit { id x0; id x1; id x2; id x3; BOOL x4; long long x5; } *)a0;
- (void)dealloc;
- (void)_resumeLoading;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)invokeForDelegate:(id /* block */)a0;
- (void)_invalidate;

@end
