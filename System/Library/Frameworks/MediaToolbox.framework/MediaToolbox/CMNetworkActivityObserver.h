@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {
    BOOL _valid;
    BOOL _registered;
    int _cmActivityToken;
    int _cmActivityPollingToken;
    CMNetworkActivityMonitor *_activityMonitor;
}

@property (readonly, nonatomic) CMNetworkActivityMonitor *activityMonitor;

+ (id)registeredObserverForActivityMonitor:(id)a0;

- (void)unregisterObservations;
- (void)registerObservations;
- (id)initForActivityMonitor:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)_pollWithInterval:(double)a0 networkActivityDidCompleteBlock:(id /* block */)a1;

@end
