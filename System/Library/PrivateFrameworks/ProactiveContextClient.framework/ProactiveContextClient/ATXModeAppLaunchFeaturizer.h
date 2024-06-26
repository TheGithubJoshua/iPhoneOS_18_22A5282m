@class NSString, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeAppLaunchFeaturizer : NSObject <ATXModeFeaturizer> {
    _PASSimpleCoalescingTimer *_cooldownTimer;
    _PASSimpleCoalescingTimer *_easeInTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property long long state;
@property (nonatomic) BOOL easeInTimerIsEnabled;
@property (nonatomic) BOOL cooldownTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stopListening;
- (unsigned long long)expectedGenreId;
- (id)registrationId;
- (void).cxx_destruct;
- (void)beginListening;
- (id)provideFeatures;
- (int)modeFeatureType;
- (id)additionalAllowedBundleIds;
- (void)_actuallyStartMode;
- (void)_actuallyEndMode;
- (id)_latestAppLaunchBundleId;
- (void)_processNewAppLaunchEvent:(id)a0;
- (id)_provideFeaturesWithBundleId:(id)a0;

@end
