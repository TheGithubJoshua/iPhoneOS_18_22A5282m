@class CRSSessionService, NSString, CRSIconLayoutService, NSMutableDictionary, CRCarPlayAppPolicyEvaluator, DBDisplayManager, NSObject, DBAppHistory, CRSAppHistoryService, FBSApplicationLibrary;
@protocol OS_dispatch_source, BSInvalidatable;

@interface DashBoard : UISystemShellApplication <CRSAppHistoryDataProviding, CRSIconLayoutServiceDelegate, FBSystemServiceDelegate> {
    FBSApplicationLibrary *_sharedApplicationLibrary;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
}

@property (retain, nonatomic) DBDisplayManager *displayManager;
@property (retain, nonatomic) CRSSessionService *sessionService;
@property (retain, nonatomic) CRSIconLayoutService *iconLayoutService;
@property (retain, nonatomic) NSMutableDictionary *iconLayoutDataProviders;
@property (retain, nonatomic) DBAppHistory *appHistory;
@property (retain, nonatomic) CRSAppHistoryService *appHistoryService;
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator;
@property (retain, nonatomic) id<BSInvalidatable> processLaunchWatchdogMonitoringAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newApplicationInitializationContext;
+ (BOOL)registerAsSystemApp;
+ (id)_newApplicationLibrary;

- (BOOL)disablesFrontBoardImplicitWindowScenes;
- (id)_windowForSystemAppButtonEventsForScreen:(id)a0;
- (id)systemServiceApplicationInfoProvider:(id)a0;
- (id)_keyWindowForScreen:(id)a0;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)a0;
- (id)init;
- (void)getSessionFeatureKeysWithCompletion:(id /* block */)a0;
- (void)systemService:(id)a0 canActivateApplication:(id)a1 withResult:(id /* block */)a2;
- (void)setSessionFeatureKeys:(id)a0 completion:(id /* block */)a1;
- (id)sharedApplicationLibrary;
- (void)getSessionEchoContextStatesWithCompletion:(id /* block */)a0;
- (id)iconLayoutService:(id)a0 dataProviderForVehicleID:(id)a1;
- (id)_currentAppHistory;
- (BOOL)_hostsSystemStatusBar;
- (void)systemService:(id)a0 handleOpenApplicationRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)_currentDashboard;
- (void).cxx_destruct;
- (void)setAnalyticsValues:(id)a0 completion:(id /* block */)a1;
- (void)getSessionUIContextStatesWithCompletion:(id /* block */)a0;
- (void)getUIContextStatesWithCompletion:(id /* block */)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)dealloc;
- (void)_runSiriTest:(id)a0 testOptions:(id)a1;

@end
