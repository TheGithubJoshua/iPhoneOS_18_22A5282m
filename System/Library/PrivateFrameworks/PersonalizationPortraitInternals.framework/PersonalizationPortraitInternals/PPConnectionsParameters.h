@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (id)locationPredictionBlockedApps;
- (BOOL)shouldUseAllowedWebsite;
- (double)foundInAppsSourceLookBackSeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (double)namedEntitySourceLookBackSeconds;
- (double)userActivityCandidateScore;
- (id)donationBlockedWebsites;
- (double)userActivityExpirySeconds;
- (double)namedEntitySourceExpirySeconds;
- (id)donationBlockedApps;
- (id)donationAllowedApps;
- (void).cxx_destruct;
- (double)linguisticTriggerExpirySeconds;
- (id)donationAllowedWebsites;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (BOOL)shouldUseAllowedApps;
- (unsigned long long)userActivityBatchSize;
- (long long)locationAppPredictionInstallHalflife;
- (double)pasteboardItemExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)calendarEventLocationExpirySeconds;
- (long long)appSwitcherPredictionExpiry;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)locationAppLastUseTimeoutSeconds;
- (double)foundInAppsSourceExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (long long)expirySeconds;

@end
