@class NSTimer, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}

+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (id)sharedInstance;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;

- (id)init;
- (void)_invalidateTriggerOnMainQueue;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_handleLocaleChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)clientDidRejectOnboardingSuggestion;
- (void)unregisterForOnboardingSuggestions;
- (void)registerObserver:(id)a0;
- (void)_registerForLocaleChangeOnMainQueue;
- (id /* block */)_notificationStreamFilterBlock;
- (void).cxx_destruct;
- (void)registerForOnboardingSuggestions;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)dealloc;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)averageNumberOfNotifications:(id /* block */)a0;

@end
