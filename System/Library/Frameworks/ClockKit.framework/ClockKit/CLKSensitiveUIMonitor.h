@interface CLKSensitiveUIMonitor : NSObject

+ (id)sharedMonitor;

- (void)removeSensitiveUIObserver:(id)a0;
- (BOOL)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (BOOL)considersUISensitivitySensitive:(long long)a0;
- (BOOL)isSensitiveUIEnabled;

@end
