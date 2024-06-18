@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)systemControllerDied:(id)a0;
- (void).cxx_destruct;
- (float)_getNewSystemVolumesWithNotification:(id)a0 category:(id)a1;
- (void)systemVolumeDidChange:(id)a0;
- (BOOL)_fetchSystemVolumeForCategory:(id)a0 usingSystemController:(id)a1 volume:(float *)a2;
- (void)dealloc;
- (void)startObservingSystemVolumes;
- (void)_notifyObserver:(id)a0 volumeDidChanged:(float)a1 forAudioCategory:(id)a2;
- (float)alarmVolume;
- (BOOL)_supportAVSystemVolumeFetch;

@end
