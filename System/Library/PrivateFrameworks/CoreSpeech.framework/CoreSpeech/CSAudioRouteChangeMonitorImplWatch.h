@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isSiriInputSourceOutOfBand;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)hearstConnected;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void).cxx_destruct;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)_fetchHearstRoutedState;
- (void)_startObservingAudioRouteChange;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (BOOL)jarvisConnected;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_systemControllerDied:(id)a0;
- (BOOL)carPlayConnected;
- (BOOL)hearstRouted;
- (void)activeAudioRouteDidChange:(id)a0;

@end
