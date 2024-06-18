@class FCNetworkReachability, NSString, NSHashTable;

@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SWReachabilityProvider>

@property (readonly, nonatomic) FCNetworkReachability *networkReachability;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addReachabilityObserver:(id)a0;
- (BOOL)isNetworkReachable;
- (void)removeReachabilityObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithNetworkReachability:(id)a0;
- (void)networkReachabilityDidChange:(id)a0;

@end
