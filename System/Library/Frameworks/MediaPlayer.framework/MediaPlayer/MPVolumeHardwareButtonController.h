@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject {
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}

@property (class, readonly, nonatomic) MPVolumeHardwareButtonController *sharedController;

@property (retain, nonatomic) id<MPVolumeControllerDataSource> activeDataSource;

- (void)decreaseVolume;
- (void)_volumeUpButtonTouchUp:(id)a0;
- (void)_volumeDownButtonTouchDown:(id)a0;
- (void)_commitVolumeChange;
- (void)handleVolumeDownButton;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)_changeVolumeBy:(double)a0;
- (id)_init;
- (void)_applicationWillResignActiveNotification;
- (void)_volumeDownButtonTouchUp:(id)a0;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification;
- (void)increaseVolume;
- (void)handleVolumeUpButton;
- (void)cancelVolumeEvent;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (void)_volumeUpButtonTouchDown:(id)a0;
- (double)_calculateButtonRepeatDelay;

@end
