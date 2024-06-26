@class NSString, NSMutableSet, NSError;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    NSMutableSet *_secKeyProxies;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _proxyLock;
    BOOL _sentCancel;
    BOOL _sentDidFinish;
    NSError *_immediateError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_onqueue_adjustBytesPerSecondLimit:(long long)a0;
- (void)_onqueue_suspend;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (void)_onqueue_adjustPriorityHint:(float)a0 incremental:(BOOL)a1;
- (void)_onqueue_didReceiveResponse:(id)a0;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)_onSessionQueue_disavow;
- (void)set_discretionaryOverride:(long long)a0;
- (void)_onqueue_cancel;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustLoadingPoolPriority;
- (id)_timingData;
- (id)initWithTaskInfo:(id)a0 taskGroup:(id)a1 ident:(unsigned long long)a2;
- (id)initWithBackgroundTask:(id)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onqueue_resume;
- (void)addSecKeyProxy:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setTaskDescription:(id)a0;
- (void)dealloc;
- (void)removeSecKeyProxy:(id)a0;

@end
