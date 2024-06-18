@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject {
    int _state;
    BOOL _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void)_setupActivationState;
- (int)lockdownState;
- (void).cxx_destruct;
- (void)_resetActivationState;
- (BOOL)brickedDevice;

@end
