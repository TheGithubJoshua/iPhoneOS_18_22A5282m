@class SBFAnalyticsClient, NSString, DNDStateService;

@interface SBDoNotDisturbMetric : NSObject <DNDStateUpdateListener, SBFAnalyticsBackendEventHandling>

@property (readonly, nonatomic) DNDStateService *dndStateService;
@property (readonly, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) NSString *primaryBundleIdentifier;
@property (copy, nonatomic) NSString *sideBundleIdentifier;
@property (copy, nonatomic) NSString *floatingBundleIdentifier;
@property (readonly, nonatomic, getter=isDoNotDisturbActive) BOOL doNotDisturbActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)a0 fromContext:(id)a1;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (id)initWithAnalyticsClient:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
