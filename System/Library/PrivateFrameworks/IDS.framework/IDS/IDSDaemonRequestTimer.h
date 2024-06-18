@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {
    NSMutableDictionary *_requestContextMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _requestContextMapLock;
}

- (id)init;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(id /* block */)a0;
- (id)scheduleTimeoutWithResponseHandler:(id)a0 timeoutInterval:(double)a1 timeoutBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (id)_criticalFindRequestContextWithResponseHandler:(id)a0;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (void)dealloc;
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)a0;
- (void)_handleSystemTimerFired:(id)a0;
- (long long)inFlightRequestCount;

@end
