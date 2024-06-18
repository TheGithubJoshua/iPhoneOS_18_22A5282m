@class CXCallObserver, NSObject;
@protocol ENOnboardingManagerDelegate;

@interface ENOnboardingManager : NSObject {
    int _screenLockNotifyToken;
    int _cameraIrisFrontNotifyToken;
    int _cameraIrisBackNotifyToken;
    int _cameraIrisBackTeleNotifyToken;
}

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (nonatomic) BOOL isCaptureSessionRunning;
@property (weak, nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isIdealTimeForBuddy) BOOL idealTimeForBuddy;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (nonatomic) BOOL pendingBuddyOnboarding;

- (BOOL)_isInLostMode;
- (id)init;
- (void)_deviceLockStateChangedWithToken:(int)a0;
- (void)_observeCameraIrisNotifications;
- (void).cxx_destruct;
- (void)setShouldObserveDeviceUnlocks:(BOOL)a0;
- (void)dealloc;
- (void)_cameraIrisStateChangedWithToken:(int)a0;

@end
