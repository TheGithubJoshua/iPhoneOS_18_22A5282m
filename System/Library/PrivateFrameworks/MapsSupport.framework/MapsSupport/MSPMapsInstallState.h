@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (void)setRunningInsideMapsApp;
+ (BOOL)isMapsAppInstalled;
+ (id)sharedState;

- (id)init;
- (void)receivedChangeNotification:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (BOOL)_fetchMapsAppInstallState;
- (void).cxx_destruct;
- (BOOL)_isMapsAppInstalled;
- (void)dealloc;
- (void)registerMapsInstallStateObserver:(id)a0;

@end
