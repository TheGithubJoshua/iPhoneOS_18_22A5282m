@class _ATXBundleIdSet;

@interface _ATXAggregateLogger : NSObject {
    _ATXBundleIdSet *_bundleIdSet;
    long long _buildType;
}

+ (id)suggestionCountsArray;
+ (id)predictedItemOutcomesMapping;
+ (id)sharedInstance;
+ (id)notificationOutcomesMapping;
+ (id)predictionOutcomesMapping;
+ (BOOL)yesWithProbability:(double)a0;
+ (long long)getBuildType;
+ (void)yesWithProbabilityStopMocking;
+ (BOOL)isConversionOutcome:(unsigned long long)a0;
+ (id)propertyStringForLaunchReason:(id)a0;
+ (void)yesWithProbabilityAlwaysSays:(BOOL)a0;
+ (id)stringForPredictedItemOutcome:(unsigned long long)a0;
+ (id)stringForPredictionOutcome:(unsigned long long)a0;
+ (id)quietingSuggestionOutcomesMapping;

- (id)init;
- (void)logLaunchEventWithLaunchReason:(id)a0 predicted:(BOOL)a1 position:(long long)a2;
- (void)logQuietingSuggestionOutcome:(long long)a0;
- (void)logAppLaunch:(id)a0 bundleId:(id)a1;
- (void)logNotificationInteraction:(long long)a0 orbed:(BOOL)a1 onscreen:(BOOL)a2;
- (void)logSuggestionCounts:(id)a0;
- (void).cxx_destruct;
- (void)logPromotingSuggestionOutcome:(long long)a0;
- (void)logInputs:(const float *)a0 andScore:(float)a1 withOutcome:(unsigned long long)a2;
- (void)logPredictionEventWith:(id)a0 outcome:(unsigned long long)a1 forABGroup:(id)a2 consumerType:(unsigned long long)a3 andSubType:(unsigned char)a4;
- (void)logPredictUninstalledApps:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
- (void)logPredictionOfAppWithBundleId:(id)a0 inputs:(const float *)a1 outcome:(unsigned long long)a2 rank:(unsigned long long)a3 score:(float)a4 forABGroup:(id)a5;

@end
