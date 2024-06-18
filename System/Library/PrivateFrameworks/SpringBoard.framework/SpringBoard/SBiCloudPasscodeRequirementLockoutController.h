@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBiCloudPasscodeRequirementLockoutController : NSObject <SBSoftLockoutControllerDelegate> {
    SBSoftLockoutController *_lockOutController;
    SBFMobileKeyBag *_mobileKeybag;
    BOOL _providedPasscode;
}

@property (readonly, nonatomic) BOOL desiresPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLockScreenManager:(id)a0 mobileKeyBag:(id)a1;
- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (BOOL)_deviceHasComplexPasscode;
- (void).cxx_destruct;
- (BOOL)requiresLockout;
- (void)dealloc;

@end
