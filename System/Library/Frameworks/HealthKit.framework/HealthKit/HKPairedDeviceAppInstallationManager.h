@interface HKPairedDeviceAppInstallationManager : HKWatchAppInstallationManager {
    id _pairedDeviceRegistry;
}

- (void)startObserving;
- (void)stopObserving;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_watchAppInstallStateDidChange:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 forPairedDeviceRegistry:(id)a1;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
