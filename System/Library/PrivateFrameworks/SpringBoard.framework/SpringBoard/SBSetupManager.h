@class NSString, NSMapTable, NSHashTable;
@protocol BSInvalidatable;

@interface SBSetupManager : NSObject <SBAppInteractionEventSourceObserving, SBFloatingDockControllerObserver> {
    unsigned long long _setupRequiredReason;
    BOOL _setupWantedForDeviceMigration;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (readonly, nonatomic) NSHashTable *floatingDockControllers;
@property (readonly, nonatomic) NSMapTable *floatingDockBehaviorAssertionsByFloatingDockController;
@property (nonatomic, getter=isInSetupModeReadyToExit) BOOL inSetupModeReadyToExit;
@property (readonly, nonatomic, getter=isInSetupMode) BOOL inSetupMode;
@property (nonatomic, getter=isDeferringDeviceOrientationUpdates) BOOL deferringDeviceOrientationUpdates;
@property (readonly, nonatomic, getter=isInSetupModeForDeviceMigration) BOOL inSetupModeForDeviceMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)floatingDockControllerDidRegister:(id)a0;
- (id)init;
- (void)_takeFloatingDockBehaviorAssertionForFloatingDockController:(id)a0;
- (BOOL)updateInSetupMode;
- (void)_invalidateFloatingDockBehaviorAssertions;
- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (BOOL)_isInSetupMode;
- (BOOL)_setSetupRequiredReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)eventSource:(id)a0 didBeginTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)_setupProcessChangedNotificationReceived:(id)a0;
- (void)dealloc;
- (void)_takeFloatingDockBehaviorAssertions;
- (void)postLaunchCompleteNotificationForSetup;
- (BOOL)setupHasFinishedRestoringFromBackup;
- (void)_toggleSetupForMigrationNeeded:(BOOL)a0 forReason:(id)a1;

@end
