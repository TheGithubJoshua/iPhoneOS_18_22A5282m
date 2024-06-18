@class NSString, _ATXDataStore, _ATXInternalUninstallNotification, _ATXAppLaunchHistogramManager, _PASLock;

@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol> {
    _ATXDataStore *_store;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    double _priorAlpha;
    double _priorBeta;
    NSString *_abGroupIdentifier;
    _ATXAppLaunchHistogramManager *_histogramManager;
    _PASLock *_histogramState;
}

@property (readonly, nonatomic) double currentAlpha;
@property (readonly, nonatomic) double currentBeta;

+ (id)sharedInstance;
+ (BOOL)isWidgetOrSpotlight:(unsigned long long)a0;

- (id)init;
- (void)removeFeedbackForBundle:(id)a0;
- (void)removeFeedbackForBundles:(id)a0;
- (void)putFeedbackScoresForApps:(id)a0 intoScores:(double *)a1 confirms:(double *)a2 rejects:(double *)a3;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)a0 forBundleId:(id)a1 rejected:(id)a2 explicitlyRejected:(id)a3 context:(id)a4;
- (void)resetData;
- (void)doDecayAtTime:(double)a0;
- (void)decayCounts;
- (id)initWithDataStore:(id)a0 histogramManager:(id)a1;
- (void).cxx_destruct;
- (void)putNopScoresForApps:(id)a0 into:(double *)a1 atTime:(double)a2;
- (void)unloadCachedHistograms;
- (void)populateFeedbackForConsumerType:(unsigned long long)a0 forBundleId:(id)a1 withContext:(id)a2 forFeedbackCategory:(long long)a3;
- (void)loadHistogramsInMemoryIfNecessary;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)a0 forBundleId:(id)a1 rejected:(id)a2 context:(id)a3;

@end
