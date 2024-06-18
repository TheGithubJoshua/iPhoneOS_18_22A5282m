@class NSString, NSError, NSObject;
@protocol MPRequestResponseControllerDelegate, OS_dispatch_source, OS_dispatch_queue, MPRequestCancellationToken;

@interface MPRequestResponseController : NSObject {
    long long _numberOfObservers;
    NSString *_requestID;
    BOOL _shouldAutomaticallyLoad;
    BOOL _needsReload;
    id<MPRequestCancellationToken> _cancelToken;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSError *_lastError;
    id _pendingResponse;
    unsigned long long _stateHandle;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) id request;
@property (weak, nonatomic) id<MPRequestResponseControllerDelegate> delegate;

- (id)init;
- (void)_onQueue_scheduleRetryAfterInterval:(double)a0;
- (void)_onQueue_updateRequestID;
- (void)beginAutomaticResponseLoading;
- (void)_onQueue_reloadIfNeeded;
- (void)endAutomaticResponseLoading;
- (void).cxx_destruct;
- (void)setNeedsReload;
- (id)_onQueue_stateDictionary;
- (void)reloadIfNeeded;
- (void)dealloc;
- (void)_responseDidInvalidate:(id)a0;
- (void)setNeedsReloadForSignificantRequestChange;

@end
