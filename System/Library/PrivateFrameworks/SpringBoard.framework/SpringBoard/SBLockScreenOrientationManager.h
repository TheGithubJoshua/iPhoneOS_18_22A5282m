@class NSString, NSDate;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver> {
    NSDate *_updateForAmbiguousOrientationsAfterDate;
    BOOL _wasUILocked;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_lockStateChanged:(id)a0;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)a0;
- (void)updateInterfaceOrientationWithRequestedOrientation:(long long)a0 animated:(BOOL)a1;

@end
