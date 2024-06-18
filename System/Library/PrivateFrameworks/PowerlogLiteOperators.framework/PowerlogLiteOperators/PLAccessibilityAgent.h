@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationVoiceControlChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackTapChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakSelectionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakScreenChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSoundRecognitionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSystemCaptioningChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationFacetimeCaptioningChanged;

+ (void)load;
+ (id)entryEventForwardNameReduceMotion;
+ (id)entryEventForwardNameVoiceControl;
+ (id)entryEventForwardNameBackTap;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardNameHandGestures;
+ (id)entryEventForwardNameSpeakScreen;
+ (id)entryEventForwardNameBackgroundContrast;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardNameAssistiveTouch;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardNameSystemCaptioning;
+ (id)entryEventForwardNameSoundRecognition;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardNameFacetimeCaptioning;
+ (id)entryEventForwardNameSpeakSelection;

- (void)initOperatorDependancies;
- (void)logEventForwardBackgroundContrast;
- (id)init;
- (void)logEventForwardReduceMotion;
- (void)log;
- (void)logEventForwardSoundRecognition;
- (void)logEventForwardVoiceControl;
- (void)logEventForwardSpeakScreen;
- (void).cxx_destruct;
- (void)logEventForwardSystemCaptioning;
- (void)logEventForwardSpeakSelection;
- (void)logEventForwardFacetimeCaptioning;
- (void)initTaskOperatorDependancies;
- (void)logEventForwardBackTap;

@end
