@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling>

@property (nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) BOOL observeDashBoardEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)conformsToCSEventHandling;
- (id)init;
- (void)logDeviceUnlock;
- (BOOL)handleEvent:(id)a0;
- (void)logDeviceWake;
- (void)logUserResetIdleTimer;
- (void)logIdleTimerScreenDimWarning;
- (void)logOrientationAndAccessoryStateForPrefix:(id)a0;
- (void)dealloc;
- (BOOL)wouldHandleButtonEvent:(id)a0;

@end
