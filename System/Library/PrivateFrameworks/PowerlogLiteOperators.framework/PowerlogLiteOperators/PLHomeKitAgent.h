@class PLXPCListenerOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition;

@interface PLHomeKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *homeKitEventsListener;
@property (retain) PLXPCListenerOperatorComposition *homeConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *cameraConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *homeKitRegistrationListener;
@property unsigned long long numBTPushes;
@property unsigned long long numConnections;
@property unsigned long long numPrevBTPushes;
@property unsigned long long numPrevConnections;
@property unsigned long long numBTConnections;
@property unsigned long long numIPConnections;
@property unsigned long long numBonjour;
@property unsigned long long numIPEvents;
@property unsigned long long numIDSPushes;
@property unsigned long long numCloudPushes;
@property unsigned long long numBTWakeAdvt;
@property unsigned long long numBTWakes;
@property double lastapwake;
@property BOOL enablelog;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numaggregatelines;
@property unsigned long long numBTlines;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitionHomeKitRegistration;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionHomeKitAdvt;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionHomeKitEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionCameraConfiguration;
+ (id)entryEventPointDefinitionHomeKitSummary;
+ (id)entryEventForwardDefinitionHomeConfiguration;
+ (id)entryAggregateDefinitionIDSPushMessageTypes;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logEventPointHomeKitEvents:(id)a0;
- (void)logEventForwardHomeConfiguration:(id)a0;
- (void)logAggregateIDSPushMessageTypes:(id)a0;
- (void)writeAggregateCounters:(id)a0;
- (void).cxx_destruct;
- (long long)registrationTypeStringToEnum:(id)a0;
- (void)logEventForwardCameraConfiguration:(id)a0;
- (void)logEventPointHomeKitRegistration:(id)a0;
- (long long)messageTypeStringToEnum:(id)a0;
- (long long)eventTypeStringToEnum:(id)a0;

@end
