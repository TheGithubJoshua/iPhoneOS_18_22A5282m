@class NSDictionary, NSString, NSMutableDictionary, NSArray, NSMutableSet, NSObject, NSUserDefaults;
@protocol OS_dispatch_source, OS_os_log, _CDContext, OS_dispatch_queue, _DKKnowledgeQuerying;

@interface _DASPairedSystemContext : NSObject

@property (retain, nonatomic) id<_CDContext> context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserDefaults *persistence;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ onConditionsChange;
@property (copy, nonatomic) id /* block */ onApplicationStateChange;
@property (nonatomic) int previousMaxThermalPressure;
@property (nonatomic) double previousDefaultThreshold;
@property (nonatomic) double previousSyncThreshold;
@property (nonatomic) double previousBatteryLevel;
@property (nonatomic) BOOL previousPluginStatus;
@property (retain, nonatomic) NSMutableDictionary *watchKitAppStatus;
@property (nonatomic) int recentTrafficSyncRequests;
@property (retain) NSString *foregroundWatchApp;
@property (retain, nonatomic) NSMutableDictionary *recentlyBackgroundedApps;
@property (retain) NSArray *previousExclusiveIdentifiers;
@property (retain, nonatomic) NSMutableSet *previousForegroundApps;
@property (retain) NSDictionary *remoteAppLaunchCount;
@property (retain) NSMutableDictionary *launchedAppCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *appUsageRefreshTimer;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int remoteForecastDeletionToken;

+ (void)initialize;
+ (id)contextWithClientIdentifier:(id)a0 callbackQueue:(id)a1 systemConditionChangeCallback:(id /* block */)a2 trafficCancelationHandler:(id /* block */)a3;
+ (id)stringForPriority:(unsigned long long)a0;
+ (id)stringForThermalLevel:(int)a0;

- (BOOL)batteryLevelsAllowSendingTrafficeForServiceIdentifiers:(id)a0 atPriorityLevel:(unsigned long long)a1;
- (void)updateAppUsageHistory;
- (BOOL)thirdPartyAppPolicyAllowsSendingTrafficForServiceIdentifiers:(id)a0 atPriorityLevel:(unsigned long long)a1 furtherChecksNecessary:(BOOL *)a2;
- (BOOL)foregroundApplicationsAllowSendingTrafficForServiceIdentifiers:(id)a0 atPriorityLevel:(unsigned long long)a1 furtherChecksNecessary:(BOOL *)a2;
- (BOOL)isAnyThirdPartyApp:(id)a0;
- (void)handleWatchAppBackgrounded;
- (BOOL)thermalLevelsAllowSendingTrafficeForServiceIdentifiers:(id)a0 atPriorityLevel:(unsigned long long)a1;
- (double)usageThresholdForPriority:(unsigned long long)a0 batteryLevel:(int)a1 isPluggedIn:(BOOL)a2;
- (BOOL)allowSyncTrafficForRecentlyBackgroundedApp;
- (int)watchBatteryLevel;
- (void)handleConditionChange;
- (void).cxx_destruct;
- (BOOL)didHandleExclusiveAppChange;
- (id)initWithClientIdentifier:(id)a0 context:(id)a1 knowledgeStore:(id)a2 callbackQueue:(id)a3 systemConditionChangeCallback:(id /* block */)a4 trafficCancelationHander:(id /* block */)a5;
- (BOOL)isWatchPluggedIn;
- (void)resetBudgetForRecentlyBackgroundedAppSyncTraffic;
- (void)handleAppStateChange;
- (BOOL)shouldBypassApplicationUsage:(id)a0;
- (void)registerForContextChanges;
- (BOOL)allowsSendingTrafficeForServiceIdentifiers:(id)a0 atPriorityLevel:(unsigned long long)a1 isReunionOrInitialSync:(BOOL)a2 responseValidityDuration:(double *)a3;
- (void)readBudgetForRecentlyBackgroundedAppSyncTraffic;
- (void)setWatchKitStatus:(BOOL)a0 forApplication:(id)a1;
- (double)usageLikelihoodForApplication:(id)a0;
- (id)pairedDeviceStream;
- (void)deleteRemoteHistogram;

@end
