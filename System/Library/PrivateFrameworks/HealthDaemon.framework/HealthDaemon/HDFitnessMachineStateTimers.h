@class HDFitnessMachineStateTimer, NSObject;
@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

@interface HDFitnessMachineStateTimers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate;

- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)beginDisconnectTimeout;
- (BOOL)isTagReadTimerValid;
- (void)beginPauseTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelMfaTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)beginTagReadTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)beginMfaTimeout;
- (void).cxx_destruct;
- (BOOL)isDisconnectTimerValid;
- (BOOL)isUserAcceptanceTimerValid;
- (void)cancelPauseTimeout;
- (void)cancelFieldDetectTimeout;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)cancelAllTimers;
- (BOOL)isMfaTimerValid;
- (void)cancelTagReadTimeout;
- (void)beginRetryConnectionTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)dealloc;
- (void)cancelDisconnectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (BOOL)isFieldDetectTimerValid;
- (void)beginUserAcceptanceTimeout;
- (BOOL)isPauseTimerValid;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (BOOL)isRetryConnectionTimerValid;

@end
