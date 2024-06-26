@class NSNumber, _UILegibilitySettings;

@interface SBMutableStatusBarSettings : SBStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (nonatomic) long long style;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long styleOverridesToSuppress;

- (id)init;
- (void)applySettings:(id)a0;
- (void)setStyle:(long long)a0;
- (void)setAlpha:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyleOverridesToSuppress:(unsigned long long)a0;
- (void)setLegibilitySettings:(id)a0;

@end
