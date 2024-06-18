@class NSHashTable;

@interface WCDistributedNotificationCenter : NSObject

@property (class, readonly, nonatomic) WCDistributedNotificationCenter *defaultCenter;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSHashTable *observers;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void).cxx_destruct;
- (void)weatherPrefsDidGetUpdated:(id)a0;
- (void)_notifyObserversOfPreferencesChange;
- (void)addObserver:(id)a0;

@end
