@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface FLNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    BOOL _isNetworkReachable;
    BOOL _isWiFiEnabled;
}

@property (readonly) BOOL isNetworkReachable;
@property (readonly) BOOL isAirplaneModeActiveWithoutWiFi;

+ (id)sharedNetworkObserver;

- (id)init;
- (id)_init;
- (void)_stopPathMonitor;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)_networkReachabilityDidChange;
- (void)dealloc;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)_startPathMonitor;
- (BOOL)_isWiFiEnabled;
- (id)addNetworkReachableBlock:(id /* block */)a0;
- (void)disableAirplaneMode;

@end
