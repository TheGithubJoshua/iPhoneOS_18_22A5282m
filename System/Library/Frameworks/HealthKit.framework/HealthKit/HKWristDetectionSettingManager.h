@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}

@property (retain, nonatomic) id pairedDeviceRegistry;
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (id)init;
- (void)_startObserving;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_queue_notifyObservers;
- (void)registerObserver:(id)a0;
- (id)_activeWatchNotifications;
- (void)_stopObserving;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void).cxx_destruct;
- (void)_queue_settingDidChange;
- (void)dealloc;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;

@end
