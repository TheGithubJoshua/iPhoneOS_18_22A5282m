@interface MenstrualCyclesAppPlugin.SettingsModel : NSObject <HKMCSettingsManagerObserver> {
    void /* unknown type, empty encoding */ settingsManager;
}

- (id)init;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (void).cxx_destruct;
- (void)settingsManagerDidUpdateHiddenDisplayTypes:(id)a0;

@end
