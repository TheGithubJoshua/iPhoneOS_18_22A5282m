@class NSArray, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;
+ (id)sharedInstance;

- (id)init;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;
- (id /* block */)callbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (void)handleLOIEntranceNotification;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)handleLOIExitNotification;
- (void)start;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (id)supportedAnchorsForNotifications;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)dealloc;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (void)_syncForTests;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)registerForSupportedAnchorNotificatons;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)handleMicrolocationVisitNotification;

@end
