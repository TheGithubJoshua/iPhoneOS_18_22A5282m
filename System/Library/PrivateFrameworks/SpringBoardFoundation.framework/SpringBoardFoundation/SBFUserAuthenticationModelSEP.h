@class NSString, SBFMobileKeyBag, MCProfileConnection, SBSecurityDefaults;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel> {
    SBFMobileKeyBag *_keybag;
    double _unblockTime;
    BOOL _permanentlyBlocked;
    BOOL _pendingWipe;
    BOOL _userRequestedEraseEnabled;
    SBSecurityDefaults *_securityDefaults;
    MCProfileConnection *_profileConnection;
}

@property (nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refreshStateAndNotify:(BOOL)a0;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeUnlockFailedWithError:(id)a0;
- (id)descriptionBuilder;
- (id)_initWithKeyBag:(id)a0 profileConnection:(id)a1;
- (void)synchronize;
- (id)initWithKeyBag:(id)a0;
- (void)noteNewMkbDeviceLockState:(id)a0;
- (void)performPasswordTest:(id /* block */)a0;
- (void)_refreshStateForMkbState:(id)a0 notify:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_isDeviceWipePreferenceEnabled;
- (void)notePasscodeEntryBegan;
- (void)refreshBlockedState;
- (void)clearBlockedState;
- (void)notePasscodeEntryCancelled;

@end
