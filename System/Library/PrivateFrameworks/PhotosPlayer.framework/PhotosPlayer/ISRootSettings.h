@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_defaultsKey;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (void)save;

@end
