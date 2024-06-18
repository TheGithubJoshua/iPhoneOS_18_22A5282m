@class NSMutableDictionary, PLEntryNotificationOperatorComposition, NSObject, PLSemaphore;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (nonatomic) int wakeSocket;
@property (retain) NSMutableDictionary *lastIsExpensiveProperties;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorCellular;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWiFi;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWired;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorLoopback;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorOther;
@property (retain) NSObject<OS_dispatch_queue> *nwPathMonitorQueue;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)accountingGroupDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (id)NWPathMonitorWithInterface:(int)a0;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)logEventPointWake;
- (void).cxx_destruct;
- (void)initKernelEvent;
- (void)handleNWPathUpdate:(id)a0;

@end
