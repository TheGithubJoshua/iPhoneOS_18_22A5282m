@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isJarvisConnected;
    BOOL _isSiriInputSourceOutOfBand;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)hearstConnected;
- (BOOL)_fetchJarvisConnectionState;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (BOOL)_fetchHearstConnectionState;
- (void)getHearstRouted:(id /* block */)a0;
- (void)preferredExternalRouteDidChange:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)pickableRoutesDidChange:(id)a0;
- (void).cxx_destruct;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)_fetchHearstRoutedState;
- (void)_startObservingAudioRouteChange;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (BOOL)jarvisConnected;
- (void)_notifyJarvisConnectionState:(BOOL)a0;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)carPlayAuxStreamSupportDidChange:(id)a0;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (BOOL)carPlayConnected;
- (BOOL)hearstRouted;

@end
