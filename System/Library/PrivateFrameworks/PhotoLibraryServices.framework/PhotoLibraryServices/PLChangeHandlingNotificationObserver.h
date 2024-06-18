@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLChangeHandlingNotificationObserver : NSObject {
    NSObject<OS_dispatch_workloop> *_targetWorkloop;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    double _throttleInterval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _notifyTokenLow;
    int _notifyTokenHigh;
    id /* block */ _notificationBlock;
}

@property (readonly) int notifyTokenLow;
@property (readonly) int notifyTokenHigh;
@property (readonly, copy) id /* block */ notificationBlock;

- (id)initWithLowPriorityThrottleInterval:(double)a0 targetWorkloop:(id)a1;
- (BOOL)_locked_stopObservingRemoteNotifications;
- (void)_inq_suspendIfThrottling;
- (void)_inq_handleLowPriorityNotification;
- (void).cxx_destruct;
- (void)_locked_startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (void)_inq_handleThrottleTimer;
- (void)_inq_handleHighPriorityNotification;
- (BOOL)stopObservingRemoteNotifications;
- (void)dealloc;
- (void)startObservingRemoteNotificationsWithBlock:(id /* block */)a0;

@end
