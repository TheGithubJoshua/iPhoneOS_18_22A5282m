@class NSTimer, NSString, SBRestartManager, SBFMobileKeyBag, SBApplicationController, NSMutableArray, SBSyncController, SBMainWorkspace;

@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver> {
    SBMainWorkspace *_mainWorkspace;
    SBApplicationController *_applicationController;
    SBRestartManager *_restartManager;
    SBSyncController *_syncController;
    SBFMobileKeyBag *_keybag;
    BOOL _invalidated;
}

@property (nonatomic, getter=_autoLaunchSynchronously, setter=_setAutoLaunchSynchronously:) BOOL autoLaunchSynchronously;
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunchTimer) NSTimer *queuedApplicationsThrottledForRelaunchTimer;
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunch) NSMutableArray *queuedApplicationsThrottledForRelaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_noteTerminationAssertionRemovedForApplication:(id)a0;
- (void)_recalculateVoIPBehaviorForApplication:(id)a0 withExitContext:(id)a1;
- (id)succinctDescription;
- (void)autoLaunchApplicationsIfNecessaryForStartup;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
- (id)succinctDescriptionBuilder;
- (void)_installedApplicationsDidChange:(id)a0;
- (id)_initWithWorkspace:(id)a0 applicationController:(id)a1 restartManager:(id)a2 syncController:(id)a3 keybag:(id)a4;
- (BOOL)_shouldAutoLaunchApplication:(id)a0 forReason:(unsigned long long)a1;
- (void)_scheduleAutoLaunchForApplicationExited:(id)a0 withExitContext:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_applicationProcessStateDidChange:(id)a0;
- (void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
- (void)_noteKeybagDidUnlock;
- (void)_launchNextQueuedApplicationThrottledForRelaunch;
- (void)_memoryPressureWarn:(id)a0;
- (void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)_autoLaunchIfNecessary:(id)a0 forReason:(unsigned long long)a1;
- (void)_memoryPressureRelieved:(id)a0;

@end
