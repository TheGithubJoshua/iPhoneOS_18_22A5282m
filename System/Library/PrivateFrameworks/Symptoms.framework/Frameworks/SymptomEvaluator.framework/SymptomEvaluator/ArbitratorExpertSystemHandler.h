@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id _foregroundStateObserver;
}

@property unsigned long long externalStepper;

+ (id)internalStateDictionary;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (id)sharedInstance;
+ (void)resetAllForCustomerBuilds;
+ (id)configureClass:(id)a0;
+ (BOOL)disableResourceNotifyDampening;

- (id)internalStateDictionary;
- (void)resetAll;
- (void)_administrativeEnable;
- (BOOL)noteSymptom:(id)a0;
- (void)setupAssistantFinished;
- (void)_dumpState;
- (id)init;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (void)removeSetupAssistantFinishedObserver;
- (void)_removeReportRecordForKey:(id)a0;
- (void)resetDiagnosticCaseUsage;
- (BOOL)_arbitratorReady;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_purgeDiagnosticCaseUsage;
- (void)_saveReportRecord:(id)a0;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (void)_scheduleMaintenanceActivity;
- (BOOL)_initializeWorkspace;
- (void).cxx_destruct;
- (void)_administrativeDisable;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void)_completeInitialization:(BOOL)a0;
- (void)_removeAllReportRecords;
- (void)alertCarrierSeedUserAboutABC;
- (void)dealloc;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)observeSetupAssistantFinished;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (BOOL)requireUserNotification;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;

@end
