@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)hearstConnected;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)jarvisConnected;
- (BOOL)hearstRouted;

@end
