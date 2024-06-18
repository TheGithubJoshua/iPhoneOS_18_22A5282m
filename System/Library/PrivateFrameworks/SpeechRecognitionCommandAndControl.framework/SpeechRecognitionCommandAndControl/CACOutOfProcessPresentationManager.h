@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager>

@property (class, readonly, nonatomic) long long remoteViewType;
@property (class, readonly, nonatomic) int axNotification;

@property (retain, nonatomic) CACAXNotificationObserver *observer;

- (void)hide;
- (BOOL)isOverlay;
- (id)init;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (BOOL)isOutOfProcess;
- (void)observer:(id)a0 didObserveNotification:(int)a1 notificationData:(void *)a2;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)handleAXNotificationData:(void *)a0;
- (void)hideWithoutAnimation;
- (void)presentWithData:(id)a0;

@end
