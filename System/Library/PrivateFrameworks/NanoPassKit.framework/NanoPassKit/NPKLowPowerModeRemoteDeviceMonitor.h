@class NSString, NPKObserverManager;

@interface NPKLowPowerModeRemoteDeviceMonitor : NSObject <NPKLowPowerModeMonitor> {
    NPKObserverManager *_observersManager;
}

@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_currentDeviceDomainAccessor;
- (void)_sendLowPowerModeEnabled:(BOOL)a0 toObserver:(id)a1;
- (void)_sendLowPowerModeEnabledStateToObservers;

@end
