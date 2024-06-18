@interface CSBluetoothWirelessSplitterMonitorImpIOS : CSBluetoothWirelessSplitterMonitor {
    int _notifyToken;
    unsigned long long _splitterState;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)splitterState;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (void)_notifyObserver:(id)a0 splitterState:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)splitterState:(id /* block */)a0;

@end
