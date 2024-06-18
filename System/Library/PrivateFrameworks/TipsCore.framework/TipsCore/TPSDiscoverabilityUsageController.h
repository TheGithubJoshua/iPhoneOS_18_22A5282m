@class NSString, TPSDuetDataProvider, NSSortDescriptor;

@interface TPSDiscoverabilityUsageController : NSObject

@property (readonly, nonatomic) TPSDuetDataProvider *duetProvider;
@property (readonly, copy, nonatomic) NSString *currentOSBuildVersion;
@property (readonly, copy, nonatomic) NSString *currentOSMajorVersion;
@property (readonly, copy, nonatomic) NSSortDescriptor *eventSortDescriptor;

+ (id)sharedInstance;

- (void)eligibleContentForBundleID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (unsigned long long)_evaluateFrequencyControlForBundleID:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_eventsPredicateForInactiveContentIDs:(id)a0 sinceDate:(id)a1;
- (void)_commonInit;
- (void)addContentUsageEvents:(id)a0 completion:(id /* block */)a1;
- (id)_initWithDirectory:(id)a0;
- (id)_eventsPredicateForHintDisplayed;
- (id)_eventsPredicateForInactiveHintStates;
- (id)_filterFrequencyControlForTips:(id)a0 bundleID:(id)a1 context:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)_majorVersionFilterPredicate;
- (id)_tipIdentifiersFromTips:(id)a0;
- (id)_majorVersionForBuildVersion:(id)a0;
- (id)_eventsPredicateForBundleID:(id)a0;
- (id)_discoverabilityUsageStream;
- (id)_eligibleContentForBundleID:(id)a0 context:(id)a1 fromEvents:(id)a2;
- (id)eligibleContentForBundleID:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_eventsPredicateForAbsentUsageFlag;
- (id)_eventsPredicateForContentIDs:(id)a0 sinceDate:(id)a1;
- (id)_metaDataForUsageEvent:(id)a0;
- (id)_eventsPredicateForBundleID:(id)a0 sinceDate:(id)a1;
- (id)_eventsPredicateForContentID:(id)a0 sinceDate:(id)a1;

@end
