@protocol ICDocCamPhysicalCaptureNotifierDelegate;

@interface ICDocCamPhysicalCaptureNotifier : NSObject

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (weak, nonatomic) id<ICDocCamPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleVolumeDownButtonDownNotification:(id)a0;
- (void)_handleVolumeDownButtonUpNotification:(id)a0;
- (void)_handleVolumeUpButtonDownNotification:(id)a0;
- (void)_handleVolumeUpButtonUpNotification:(id)a0;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeeded;

@end
