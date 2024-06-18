@class STUIDataAccessStatusDomainData, STMediaStatusDomain, STLocationStatusDomain, NSSet, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface STUIDataAccessStatusDomain : STStatusDomain {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<BSInvalidatable> _stateCaptureHandle;
    STLocationStatusDomain *_locationDomain;
    STMediaStatusDomain *_mediaDomain;
    STUIDataAccessStatusDomainData *_currentData;
    NSSet *_activeAttributions;
    NSMutableArray *_attributionsWaitingForMinimumDisplayTime;
    NSMutableDictionary *_activeAttributionMinimumDisplayTimers;
    NSMutableArray *_recentAttributions;
    NSMutableDictionary *_recentAttributionExpirationTimers;
}

+ (unsigned long long)statusDomainName;

- (id)data;
- (id)initWithServerHandle:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
