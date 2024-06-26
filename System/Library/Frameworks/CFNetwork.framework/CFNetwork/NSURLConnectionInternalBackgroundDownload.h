@class NSCountedSet, NSString, SSDownloadHandler, NSAsyncSSDownloadManager, NSTimer, NSMutableArray;

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
    struct __CFRunLoopSource { } *_source;
    NSMutableArray *_pendingOps;
    NSCountedSet *_runloops;
    SSDownloadHandler *_handler;
    NSAsyncSSDownloadManager *_manager;
    long long _downloadIdent;
    long long _ctLast;
    BOOL _terminated;
    NSTimer *_deferredStartTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_enableLogging;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)cancel;
- (long long)_getDownloadIdent;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)start;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)downloadHandlerDidDisconnect:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (void)downloadHandler:(id)a0 handleAuthenticationSession:(id)a1;
- (id)initWithInfo:(const struct InternalInit { id x0; id x1; id x2; id x3; BOOL x4; long long x5; } *)a0;
- (void)_managerFailedToStartInTime;
- (void)dealloc;
- (void)_updateDownloadState:(id)a0;
- (BOOL)downloadHandler:(id)a0 pauseSession:(id)a1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)invokeForDelegate:(id /* block */)a0;
- (void)downloadHandler:(id)a0 cancelSession:(id)a1;
- (void)_invalidate;

@end
