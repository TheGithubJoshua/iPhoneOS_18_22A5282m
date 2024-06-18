@class NWUsageTargetSelector, NSArray, NSMutableDictionary, TrackerPolicy, NetworkAnalyticsStateRelay, NSDate, LightweightTimer;
@protocol flowDispositionObserver;

@interface InterfaceTypeTracker : NSObject

@property (retain) NSArray *alwaysNote;
@property (retain) NSArray *neverNote;
@property (retain) NSArray *daemonCheck;
@property (retain) NSMutableDictionary *trackerCache;
@property long long interfaceType;
@property (retain) id<flowDispositionObserver> observer;
@property (retain) TrackerPolicy *defaultPolicy;
@property (retain) NWUsageTargetSelector *targetFlowsNewWiFi;
@property (retain) NetworkAnalyticsStateRelay *stateRelay;
@property (retain) NSDate *madePrimaryDate;
@property (retain) LightweightTimer *lwTimer;

- (void)_dumpState;
- (void)configurePolicies:(id)a0;
- (id)initWithInterfaceType:(long long)a0;
- (void)removeLinkages:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)infoDir;
- (void)setupLightweightTimer;
- (void)noteFlow:(id)a0 withDelegatee:(id)a1 snapshot:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)scheduleExpiryCheckFor:(unsigned long long)a0 delay:(double)a1;
- (void)_trackerCachePrune;
- (void)dealloc;
- (void)noteFlow:(id)a0 withOwner:(id)a1 snapshot:(id)a2;
- (void)getNetworkActivity:(id /* block */)a0;
- (void)noteFlowClassificationExpiry:(id)a0;

@end
