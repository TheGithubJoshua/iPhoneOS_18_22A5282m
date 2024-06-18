@class PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, _CDInBedDetector;

@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityFeaturesListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionQueryListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionTimelineListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionInterruptionListener;
@property (retain) _CDInBedDetector *inBedDetector;

+ (void)load;
+ (id)entryEventForwardDefinitionInactivityFeatures;
+ (id)entryEventForwardDefinitionInactivityPredictionTimeline;
+ (id)entryEventIntervalDefinitionInBedDetection;
+ (id)entryEventForwardDefinitionInactivityPredictionQuery;
+ (id)entryEventForwardDefinitionInactivityPredictionInterruption;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionInactivityPrediction;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logEventForwardInactivityFeatures:(id)a0;
- (void)handleInBedDetection:(id)a0;
- (void)logEventForwardInactivityPredictionInterruption:(id)a0;
- (void)logEventForwardInactivityPredictionQuery:(id)a0;
- (void)logEventIntervalInBedDetection:(id)a0;
- (void).cxx_destruct;
- (void)logEventIntervalInactivityPrediction:(id)a0;
- (void)logEventForwardInactivityPredictionTimeline:(id)a0;
- (void)registerForDailyNotification;
- (void)initTaskOperatorDependancies;
- (void)registerForTaskingNotification:(id)a0;

@end
