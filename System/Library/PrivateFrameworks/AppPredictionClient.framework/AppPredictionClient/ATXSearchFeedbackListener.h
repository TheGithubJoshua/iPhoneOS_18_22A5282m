@class NSMutableArray, NSString, PETGoalConversionEventTracker, NSMutableSet, ATXActionSearchResult, NSObject, ATXActionPredictionClient, ATXEngagementRecordManager;
@protocol ATXPETEventTracker2Protocol, ATXSearchFeedbackListenerTarget;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSObject<ATXSearchFeedbackListenerTarget> *_target;
    PETGoalConversionEventTracker *_apAppPredictionsShownTracker;
    struct { struct { unsigned long long lastEventTimestamp; } resultsDidBecomeVisible; struct { unsigned long long lastEventTimestamp; } didStartSearch; struct { unsigned long long lastEventTimestamp; } searchViewDidAppear; struct { unsigned long long lastEventTimestamp; } searchViewDidDisappear; struct { unsigned long long lastEventTimestamp; } didEngageResult; struct { unsigned long long lastEventTimestamp; } didEngageCardSection; } _debounce;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXActionPredictionClient *_actionPredictionClient;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSString *_currentQuery;
    BOOL _didSearchDuringSession;
    NSMutableSet *_visibleActionUUIDs;
    NSMutableSet *_visibleAppUUIDs;
    NSMutableSet *_visibleAppBundleIds;
    ATXActionSearchResult *_currentResultCard;
    NSString *_appBlendingCacheId;
    NSString *_actionBlendingCacheId;
    BOOL _hasSeenSearchViewDidAppear;
    NSMutableArray *_queuedEvents;
    BOOL _currentSessionHasEngagement;
    BOOL _previousSessionHadEngagement;
}

@property (nonatomic) BOOL shouldDebounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchViewDidAppear:(id)a0;
- (void)_resetState;
- (void)cardViewDidDisappear:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (BOOL)_isDuplicateEventWithState:(struct { unsigned long long x0; } *)a0 timestamp:(unsigned long long)a1 method:(SEL)a2;
- (id)init;
- (void)didStartSearch:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)writeSpotlightEvent:(id)a0 isViewAppearEvent:(BOOL)a1;
- (void)logEngagedSpotlightActionSuggestion:(id)a0;
- (void)sendUpdateNotification;
- (void).cxx_destruct;
- (void)_logAppPredictionsShown;
- (id)initWithTarget:(id)a0 engagementRecordManager:(id)a1 actionClient:(id)a2 tracker:(id)a3;
- (void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)a0;

@end
