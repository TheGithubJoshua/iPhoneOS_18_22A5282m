@class HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, HMDDuetPredictionSubscriberDataSource;

@interface HMDDuetPredictionSubscriber : HMFObject

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) id<HMDDuetPredictionSubscriberDataSource> dataSource;
@property int duetPredictionsChangedNotificationToken;

- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 dataSource:(id)a2;

@end
