@class CSCoverSheetViewController, NSString, SBDashBoardSetupViewController, SBSetupManager;

@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling> {
    CSCoverSheetViewController *_coverSheetViewController;
    SBSetupManager *_setupManager;
    SBDashBoardSetupViewController *_setupViewController;
}

@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)conformsToCSEventHandling;
- (id)init;
- (void)_clearSetupViewIfNecessaryAnimated:(BOOL)a0;
- (void)conformsToCSBehaviorProviding;
- (id)initWithCoverSheetViewController:(id)a0 setupManager:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)_configureForCurrentSetupMode;
- (void)conformsToCSExternalBehaviorProviding;
- (void)_setupModeChanged:(id)a0;
- (void)_addOrRemoveSetupViewIfNecessaryAnimated:(BOOL)a0;
- (void)dealloc;
- (BOOL)wouldHandleButtonEvent:(id)a0;

@end
