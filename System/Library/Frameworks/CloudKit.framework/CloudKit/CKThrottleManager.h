@class NSArray;
@protocol CKThrottleObserver;

@interface CKThrottleManager : NSObject {
    NSArray *_throttleList;
    id<CKThrottleObserver> _observer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _throttleLock;
}

+ (id)sharedManager;

- (id)CKStatusReportArray;
- (id)_init;
- (id)allThrottles;
- (void)resetThrottles;
- (void).cxx_destruct;
- (void)throttleListBecameEmpty;
- (BOOL)addThrottle:(id)a0;
- (void)setThrottleObserver:(id)a0;
- (id)enforcedThrottleForCriteria:(id)a0 willSendRequest:(BOOL)a1 outThrottleError:(id *)a2;
- (void)noteDataChangeForThrottle:(id)a0;
- (void)throttleWasAdded:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;

@end
