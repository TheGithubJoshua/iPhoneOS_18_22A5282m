@class SBFTraitsSettingsOrientation, SBFTraitsSettingsZOrderLevel;

@interface SBFMutableTraitsSettings : SBFTraitsSettings

@property (retain, nonatomic) SBFTraitsSettingsZOrderLevel *zOrderLevelSettings;
@property (retain, nonatomic) SBFTraitsSettingsOrientation *orientationSettings;

- (void)setZOrderLevelSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientationSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
