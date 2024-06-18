@class MTTimerSnapshot, MTLanguageChangeListener, MTSystemStateListener, MTSleepModeMonitor, MTAlarmStorage, MTMetrics, MTAlarmScheduler, MTWidgetProvider, MTSleepCoordinator, NSString, MTSleepManager, MTSleepSessionManager, MTTimerScheduler, MTTimeListener, MTSleepSessionTracker, MTAgentDiagnosticListener, MTTimerSessionsCoordinator, MTAlarmIntentDonor, MTTimerStorage, MTTimerServer, MTTimerIntentDonor, MTAlarmSyncDataModel, MTCoreDuetMonitor, MTAlarmServer, NSDate, MTAlarmSnapshot, MTAgentNotificationManager;
@protocol NAScheduler, MTNotificationCenter;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate, MTApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) NSDate *launchDate;
@property (nonatomic) BOOL isHorseman;
@property (nonatomic) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTAgentNotificationManager *notificationManager;
@property (retain, nonatomic) MTSystemStateListener *systemStateListener;
@property (retain, nonatomic) MTLanguageChangeListener *languageChangeListener;
@property (retain, nonatomic) MTAgentDiagnosticListener *diagnostics;
@property (retain, nonatomic) MTTimeListener *timeListener;
@property (retain, nonatomic) MTAlarmServer *alarmServer;
@property (retain, nonatomic) MTAlarmScheduler *alarmScheduler;
@property (retain, nonatomic) MTAlarmSnapshot *alarmSnapshot;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerServer *timerServer;
@property (retain, nonatomic) MTTimerScheduler *timerScheduler;
@property (retain, nonatomic) MTTimerSnapshot *timerSnapshot;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (retain, nonatomic) MTAlarmIntentDonor *alarmIntentDonor;
@property (retain, nonatomic) MTTimerIntentDonor *timerIntentDonor;
@property (retain, nonatomic) MTCoreDuetMonitor *coreDuetMonitor;
@property (retain, nonatomic) MTWidgetProvider *widgetProvider;
@property (retain, nonatomic) MTTimerSessionsCoordinator *timerSessionsCoordinator;
@property (retain, nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor;
@property (retain, nonatomic) MTSleepSessionManager *sleepSessionManager;
@property (retain, nonatomic) MTSleepSessionTracker *sleepSessionTracker;
@property (retain, nonatomic) MTAlarmSyncDataModel *alarmSyncDataModel;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (readonly, nonatomic) MTSleepManager *sleepManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)agent;

- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (id)init;
- (void)_setupInitialListeners;
- (void)restoreDidFinish;
- (void)observedApplicationDidUninstallForBundleIdentifier:(id)a0;
- (void)handleF5Reset;
- (void)_setupNotificationCenter;
- (id)_diagnosticProviders;
- (void)handleMigrationFinish;
- (void)_setupSync;
- (void).cxx_destruct;
- (void)_removeUserDefaultsData;
- (void)_removeUserDefaultsDataIfNecessary:(id)a0;
- (void)_setupSecondaryListeners;
- (void)_setupAlarms;
- (void)_setupTimers;

@end
