@class SBFUserAuthenticationController, NSString;
@protocol SBFThermalBlockProvider;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider> {
    unsigned long long _lastBlockedStatus;
}

@property (retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController;
@property (retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) id<SBFThermalBlockProvider> thermalProvider;
@property (nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) BOOL lockedOutCached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isBlocked;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isTemporarilyBlocked;
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)a0;
- (BOOL)isLockedOut;
- (unsigned long long)deviceBlockStatus;
- (BOOL)isThermallyBlocked;
- (BOOL)isUserRequestedEraseEnabled;
- (id)succinctDescription;
- (id)initWithThermalController:(id)a0 authenticationController:(id)a1;
- (BOOL)isPermanentlyBlocked;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)temporaryBlockStatusChanged;
- (void)thermalBlockStatusChanged:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;

@end
