@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (id)init;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)heroAppWorstCaseLocationAccuracy;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (id)appClipsModelVersion;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)heroAppPredictionExpirationInterval;
- (id)heroAppPredictionsKey;
- (double)appClipsOverallMinRejects;
- (double)appClipsMediumConfidenceScoreThreshold;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (id)defaultHeroPOICategory;
- (id)appClipsNotificationId;
- (double)heroAppMinRefreshInterval;
- (id)appClipsNotificationLockscreenIdentifier;
- (double)heroAppMinimumRejects;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (long long)appClipsLaunchErrorCode;
- (void).cxx_destruct;
- (double)appClipsPerAppClipMinRejects;
- (double)appClipsPerAppClipEngagementThreshold;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (double)heroAppTileMaxErrorDistance;
- (long long)appClipsDecodeErrorCode;
- (double)appClipsOverallEngagementThreshold;
- (id)appClipsNotificationCategoryIdentifier;
- (int)heroAppIndexNotSet;
- (id)appClipsErrorDomain;
- (double)appClipsHighConfidenceScoreThreshold;
- (double)heroAppEngagementThreshold;
- (unsigned long long)appShadowLogSamplesPerDay;

@end
