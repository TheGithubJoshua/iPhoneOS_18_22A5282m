@interface RTManagedConfiguration_Embedded : RTManagedConfiguration

- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (BOOL)isFindMyCarAllowed;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (BOOL)isHealthDataSubmissionAllowed;
- (void)setDelegate:(id)a0;
- (id)stringToManagedConfigurationKey:(id)a0;
- (void)dealloc;

@end
