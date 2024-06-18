@interface SBExternalDisplayRuntimeAvailabilitySettings : PTSettings

@property (nonatomic) BOOL requirePointer;
@property (nonatomic) BOOL requireHardwareKeyboard;
@property (readonly, nonatomic) long long extendedDisplayRequirements;

+ (BOOL)ignoresKey:(id)a0;
+ (id)_moduleWithSectionTitle:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
