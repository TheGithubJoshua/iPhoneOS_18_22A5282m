@class NSMutableDictionary, CLLocation, CWFAutoJoinRequest, NSObject, NSMutableArray, CWFAutoJoinStatistics, NSString, NSSet, NSMutableOrderedSet, CWFScanResult, NSMutableSet, CWFAutoJoinMetric, NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFAutoJoinManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_supportedChannels;
    NSSet *_knownNetworks;
    CWFScanResult *_associatedNetwork;
    CLLocation *_location;
    BOOL _didConfigurationChangeSincePreviousAttempt;
    long long _retrySchedule;
    unsigned long long _retryScheduleIndex;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _isRetryScheduled;
    NSMutableDictionary *_retryIntervalMap;
    NSMutableArray *_pendingRequests;
    CWFAutoJoinRequest *_activeRequest;
    CWFAutoJoinStatistics *_statistics;
    NSObject<OS_dispatch_source> *_statisticsSubmissionTimer;
    CWFAutoJoinMetric *_cachedMetric;
    CWFAutoJoinMetric *_metric;
    long long _state;
    NSMutableSet *_failedToJoinKnownNetworkIDs;
    NSMutableDictionary *_followup6GHzRNRMap;
    NSMutableDictionary *_followup6GHzFILSDMap;
    NSMutableDictionary *_followup6GHzScanResultsMap;
    BOOL _invalidated;
    BOOL _cancelled;
    BOOL _requeued;
    NSError *_underlyingCancelError;
    NSMutableDictionary *_triggerTimestampMap;
    NSMutableDictionary *_throttleIntervalMap;
    NSMutableDictionary *_throttleTimestampMap;
    NSObject<OS_dispatch_source> *_nextRequestTimer;
    BOOL _isNextRequestScheduled;
    long long _previousNonRetryTrigger;
    NSMutableDictionary *_deferredColocatedJoinCandidateMap;
    unsigned long long _beginTimestamp;
    BOOL _maxCompatibilityEnabled;
    NSMutableSet *_hiddenNetworkChannels;
    BOOL _didDiscoverBSS;
    BOOL _resetCachedKnownNetworksContext;
    NSMutableDictionary *_cachedKnownNetworksContexts;
    NSMutableDictionary *_knownNetworkSSIDMap;
    NSMutableSet *_passpointKnownNetworks;
    NSMutableOrderedSet *_deferredKnownNetworks;
    unsigned long long _linkChangeTimestamp;
}

@property (copy) id /* block */ allowAutoJoinHandler;
@property (copy) id /* block */ allowKnownNetworkHandler;
@property (copy) id /* block */ knownNetworkComparator;
@property (copy) id /* block */ scanForNetworksHandler;
@property (copy) id /* block */ performGASQueryHandler;
@property (copy) id /* block */ allowJoinCandidateHandler;
@property (copy) id /* block */ joinCandidateComparator;
@property (copy) id /* block */ associateToNetworkHandler;
@property (copy) id /* block */ allowAutoHotspotHandler;
@property (copy) id /* block */ allowHotspotHandler;
@property (copy) id /* block */ browseForHotspotsHandler;
@property (copy) id /* block */ connectToHotspotHandler;
@property (copy) id /* block */ updateKnownNetworkHandler;
@property (copy) id /* block */ eventHandler;
@property (copy) id /* block */ invalidationHandler;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) CLLocation *location;
@property (copy) CWFScanResult *associatedNetwork;
@property (copy) NSSet *knownNetworks;
@property (copy) NSSet *supportedChannels;
@property long long retrySchedule;
@property (nonatomic) BOOL maxCompatibilityEnabled;
@property (copy, nonatomic) NSString *colocatedScopeID;
@property (readonly) CWFAutoJoinMetric *metric;
@property (readonly) CWFAutoJoinStatistics *statistics;

- (id)metric;
- (BOOL)__calloutToConnectToHotspot:(id)a0 error:(id *)a1;
- (void)resetStatistics;
- (id)__browseForHotspotsWithTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (id)__passpointScanResults:(id)a0;
- (void)__addRequest:(id)a0;
- (id)init;
- (long long)__calloutToAllowAutoHotspotWithTrigger:(long long)a0 error:(id *)a1;
- (BOOL)__matchAndJoinScanResults:(id)a0 allowPreAssociationScan:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)__performJoinWithNetwork:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)__connectToHotspot:(id)a0 error:(id *)a1;
- (BOOL)__preflightMatchKnownNetworksForScanResult:(id)a0;
- (BOOL)__allowHotspot:(id)a0 error:(id *)a1;
- (id)__descriptionForError:(id)a0;
- (id)__retryIntervalWithScheduleIndex:(unsigned long long)a0;
- (void)__sortHotspotCandidates:(id)a0;
- (id)__calloutToBrowseForHotspotsWithTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (id)__knownNetworksSupportingSeamlessSSIDTransition:(id)a0 fromNetwork:(id)a1 allowSameSSID:(BOOL)a2 trigger:(long long)a3;
- (id)__performScanWithChannelList:(id)a0 SSIDList:(id)a1 passive:(BOOL)a2 dwellTime:(unsigned long long)a3 maxCacheAge:(unsigned long long)a4 cacheOnly:(BOOL)a5 isPreAssociationScan:(BOOL)a6 error:(id *)a7;
- (BOOL)__allowOpportunisticNetworkTransitionWithTrigger:(long long)a0;
- (void)__addDependentThrottleInterval:(unsigned long long)a0 trigger:(long long)a1 dependentTrigger:(long long)a2;
- (void)__performAutoJoin;
- (BOOL)__performAutoHotspotWithBrowseTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (void)__addWilcardThrottleInterval:(unsigned long long)a0 triggers:(id)a1;
- (void)__updateNextRequestTimer;
- (void)__updateAutoJoinState:(long long)a0;
- (void)setRetrySchedule:(long long)a0;
- (unsigned long long)__nextRequestInterval;
- (void)__setupRetryIntervals;
- (BOOL)__shouldAllowPreAssocScan;
- (id)__knownNetworksList:(id)a0 containsMatchingKnownNetwork:(id)a1;
- (id)__calloutToScanForNetworksWithParameters:(id)a0 scanChannels:(id *)a1 error:(id *)a2;
- (unsigned long long)__applyRetryIntervalSkew:(unsigned long long)a0;
- (BOOL)__allowKnownNetwork:(id)a0 trigger:(long long)a1 allowForSeamlessSSIDTransition:(id)a2 defer:(BOOL *)a3 error:(id *)a4;
- (BOOL)__shouldThrottleAutoJoinTrigger:(long long)a0;
- (BOOL)__isAutoJoinCancelled:(id *)a0;
- (id)__morePreferredKnownNetworksWithCandidate:(id)a0 knownNetworks:(id)a1 trigger:(long long)a2;
- (id)__perform6GHzFollowupDiscoveryWithScanResults:(id)a0 SSIDList:(id)a1 dwellTime:(unsigned long long)a2 context:(id)a3 error:(id *)a4;
- (id)__cachedScanResultsWithChannelList:(id)a0 maxCacheAge:(unsigned long long)a1 ANQPElementIDList:(id)a2 maxANQPCacheAge:(unsigned long long)a3;
- (BOOL)__calloutToAllowHotspot:(id)a0 error:(id *)a1;
- (void)__updateDiscoverTimestampForJoinCandidates:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)__calloutToAllowKnownNetwork:(id)a0 trigger:(long long)a1 allowForSeamlessSSIDTransition:(id)a2 defer:(BOOL *)a3 error:(id *)a4;
- (void)cancelAutoJoinWithUUID:(id)a0 error:(id)a1 reply:(id /* block */)a2;
- (void)__sortKnownNetworks:(id)a0;
- (id)__performPreAssociationScanWithContext:(id)a0 network:(id)a1;
- (void)__sortJoinCandidates:(id)a0 context:(id)a1;
- (id)__retryInterval;
- (BOOL)__shouldPrioritizeRetryOverNewRequest:(long long)a0;
- (void)__updateStatisticsWithScanChannels:(id)a0;
- (BOOL)__calloutToAssociateWithParameters:(id)a0 error:(id *)a1;
- (void)__removeRedundantRequests:(id)a0;
- (void)__prepareKnownNetworksContext:(id)a0;
- (BOOL)__allowJoinCandidate:(id)a0 trigger:(long long)a1 defer:(BOOL *)a2 error:(id *)a3;
- (BOOL)__nextRequest;
- (BOOL)maxCompatibilityEnabled;
- (BOOL)__shouldAllowAutoHotspotForTrigger:(long long)a0;
- (BOOL)__calloutToAllowAutoJoinWithTrigger:(long long)a0 error:(id *)a1;
- (void)__updateStatisticsWithPreAssocScanChannels:(id)a0;
- (void)__setupThrottleIntervals;
- (BOOL)__shouldBypassUnusedNetworkPeriodCheckForTrigger:(long long)a0;
- (BOOL)__candidateSupportsSeamlessSSIDTransition:(id)a0 fromNetwork:(id)a1 trigger:(long long)a2;
- (void)setMaxCompatibilityEnabled:(BOOL)a0;
- (void)__sortKnownNetworksByJoinTimestamp:(id)a0;
- (BOOL)__shouldIgnoreRequestWithTrigger:(long long)a0;
- (id)statistics;
- (long long)__allowAutoHotspotWithTrigger:(long long)a0 error:(id *)a1;
- (BOOL)__isAutoJoinRequeued;
- (void)__updateRetrySchedule;
- (BOOL)__discoverKnownNetworksWithContext:(id)a0 error:(id *)a1;
- (long long)__retryTriggerForRetrySchedule:(long long)a0;
- (BOOL)__shouldInvokeImmediatelyForTrigger:(long long)a0;
- (id)__basicChannelRepresentation:(id)a0;
- (long long)retrySchedule;
- (void)__updateRNRChannel:(id)a0 joinCandidate:(id)a1;
- (id)__calloutToPerformGASQueryWithParameters:(id)a0 GASQueryNetworks:(id *)a1 error:(id *)a2;
- (BOOL)__allowAutoJoinWithTrigger:(long long)a0 error:(id *)a1;
- (BOOL)__calloutToAllowJoinCandidate:(id)a0 trigger:(long long)a1 defer:(BOOL *)a2 error:(id *)a3;
- (BOOL)__shouldResetRetryIntervalIndexForTrigger:(long long)a0;
- (void)__addMatchingThrottleInterval:(unsigned long long)a0 triggers:(id)a1;
- (id)performAutoJoinWithParameters:(id)a0 reply:(id /* block */)a1;
- (id)__performGASQueryWithScanResults:(id)a0 ANQPElementIDList:(id)a1 maxCacheAge:(unsigned long long)a2 cacheOnly:(BOOL)a3 error:(id *)a4;
- (void)__updateCachedMetricAndStatistics:(id)a0;

@end
