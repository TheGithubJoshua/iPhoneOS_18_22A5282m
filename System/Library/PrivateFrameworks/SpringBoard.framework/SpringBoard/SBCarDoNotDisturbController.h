@class CARAutomaticDNDStatus, NSString, NSObject, SBLockScreenManager;
@protocol OS_dispatch_queue;

@interface SBCarDoNotDisturbController : NSObject <CSExternalLockProviding, CSExternalEventHandling, CSExternalBehaviorProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_stateValid;
    BOOL _queue_exitConfirmationRequired;
    BOOL _queue_pendingExitConfirmationRequirement;
    BOOL _queue_screenOn;
    BOOL _queue_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
    CARAutomaticDNDStatus *_carAutomaticDNDStatus;
    SBLockScreenManager *_lockScreenManager;
}

@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL showPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;

- (void)conformsToCSEventHandling;
- (id)init;
- (void)_queue_setScreenOn:(BOOL)a0;
- (void)_queue_setExitConfirmationRequired:(BOOL)a0;
- (void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(BOOL)a0;
- (void)conformsToCSBehaviorProviding;
- (id)initWithCARAutomaticDNDStatus:(id)a0 lockScreenManager:(id)a1;
- (void)_setScreenOn:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)unlockFromSource:(int)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (BOOL)_isExitConfirmationRequired;
- (void)dealloc;
- (BOOL)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
- (BOOL)_shouldExitConfirmationBeEnforced;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)_dismissAlertItemsAnimated:(BOOL)a0;

@end
