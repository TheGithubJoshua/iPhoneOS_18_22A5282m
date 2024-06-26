@class _UIFeedbackGeneratorConfiguration, NSSet, NSString, UIView, NSObject, NSMutableDictionary;
@protocol OS_dispatch_source, UICoordinateSpace;

@interface UIFeedbackGenerator : NSObject {
    long long _styleActivationCount[3];
    long long _autoDeactivationCount[3];
    NSObject<OS_dispatch_source> *_autoDeactivateTimer;
    NSMutableDictionary *_preparationTimers;
    id /* block */ _feedbackWarmingBlock;
    double _currentDelay;
    NSSet *_usedFeedbacks;
    BOOL _activated;
}

@property (nonatomic, getter=_isMuted, setter=_setMuted:) BOOL muted;
@property (nonatomic) long long activationCount;
@property (nonatomic) long long externalActivationCount;
@property (nonatomic) BOOL usesCustomActivation;
@property (weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic, getter=_configuration, setter=_setConfiguration:) _UIFeedbackGeneratorConfiguration *configuration;
@property (readonly, nonatomic) NSSet *engines;
@property (readonly, nonatomic, getter=_effectiveCoordinateSpace) id<UICoordinateSpace> effectiveCoordinateSpace;
@property (readonly, nonatomic, getter=_isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=_autoDeactivationTimeout) double autoDeactivationTimeout;
@property (readonly, nonatomic, getter=_isAutoDeactivated) BOOL autoDeactivated;
@property (readonly, nonatomic) NSString *_stats_key;

+ (Class)_configurationClass;
+ (id)_defaultCoordinateSpace;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_resetPreparationTimeouts;
+ (void)_setAutoDeactivateTimeout:(double)a0;
+ (void)_setPreparationTimeout:(double)a0 forStyle:(long long)a1;
+ (void)_setRunningTests:(BOOL)a0;
+ (id)behaviorWithConfiguration:(id)a0 coordinateSpace:(id)a1;
+ (id)behaviorWithCoordinateSpace:(id)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (double)_preparationTimeoutForStyle:(long long)a0;
- (void)deactivate;
- (id)initWithConfiguration:(id)a0 coordinateSpace:(id)a1;
- (void).cxx_destruct;
- (void)_playFeedback:(id)a0;
- (id)description;
- (void)activateWithCompletionBlock:(id /* block */)a0;
- (void)_activated;
- (void)dealloc;
- (void)_stopFeedback:(id)a0;
- (void)_deactivated;
- (id)_ui_descriptionBuilder;
- (void)prepare;
- (BOOL)isActive;
- (id)initWithCoordinateSpace:(id)a0;
- (void)_stats_prepared;
- (void)_autoDeactivate;
- (void)_setOutputMode:(long long)a0;
- (void)__activateWithStyle:(long long)a0 forFeedback:(id)a1 completionBlock:(id /* block */)a2;
- (void)__deactivateWithStyle:(long long)a0;
- (void)_activateWithStyle:(long long)a0 completionBlock:(id /* block */)a1;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationTimeOutCountStatistics;
- (void)_clientDidUpdateGeneratorWithSelector:(SEL)a0;
- (void)_deactivateWithStyle:(long long)a0;
- (void)_forceDeactivationForStyle:(long long)a0;
- (long long)_outputMode;
- (id)_playCountStatistics;
- (void)_playFeedback:(id)a0 withMinimumIntervalPassed:(double)a1 since:(double *)a2 prefersRegularPace:(BOOL)a3;
- (id)_preparationCountStatistics;
- (id)_preparationTimerForStyle:(long long)a0;
- (void)_prepareWithStyle:(long long)a0;
- (void)_resetAutoDeactivationTimeout;
- (void)_scheduleFeedbackWarming;
- (void)_setPreparationTimer:(id)a0 forStyle:(long long)a1;
- (void)_setupAutoDeactivateTimer;
- (void)_setupEnginesIfNeededForFeedback:(id)a0;
- (void)_setupForFeedback:(id)a0;
- (void)_startFeedbackWarming;
- (id)_statsSuffix;
- (void)_stats_activationDidChangeTo:(BOOL)a0;
- (void)_stats_activationTimedOut;
- (void)_stats_playedFeedback;
- (void)_stopAutoDeactivateTimer;
- (void)_stopFeedbackWarming;
- (void)_stopPreparationForAllStyles;
- (void)_stopPreparationForStyle:(long long)a0;
- (void)_updateActivationStateForRemovedEngines:(id)a0 addedEngines:(id)a1 prewarmCount:(long long)a2 turnOnCount:(long long)a3;
- (void)_updatePreparationTimer:(id)a0 withTimeout:(double)a1;
- (id)initWithConfiguration:(id)a0 view:(id)a1;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;

@end
