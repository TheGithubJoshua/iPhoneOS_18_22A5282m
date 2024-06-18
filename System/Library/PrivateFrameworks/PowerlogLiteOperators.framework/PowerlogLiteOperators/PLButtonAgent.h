@class PLHIDEventOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLHIDEventOperatorComposition *buttonEvent;
@property (retain) PLHIDEventOperatorComposition *smartCoverEvent;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logEventPointButton:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (void)logEventForwardSmartCover:(struct __IOHIDEvent { } *)a0;

@end
