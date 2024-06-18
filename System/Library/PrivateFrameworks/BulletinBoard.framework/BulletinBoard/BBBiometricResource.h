@class BKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;

- (void)_updateHasEnrolledPearlIdentities;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_unregisterForBKEnrollmentChange;
- (void)_registerForPasscodeChange;
- (void)_updateIsPasscodeSet;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void).cxx_destruct;
- (void)_registerForBiometricUnlockAllowedChange;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_registerForBKEnrollmentChange;

@end
