@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager

@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)handleCameraPowerNotification:(id)a0;
- (void)_handleCameraPowerNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
