@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings

@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsB;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsB;
@property (nonatomic) double weighting;

- (BOOL)isBackdropVisible;
- (void)setDefaultValues;
- (void).cxx_destruct;
- (void)computeOutputSettingsUsingModel:(id)a0;
- (void)copyAdditionalSettingsFromSettings:(id)a0;
- (BOOL)requiresBackdropLayer;
- (void)setRequiresColorStatistics:(BOOL)a0;

@end
