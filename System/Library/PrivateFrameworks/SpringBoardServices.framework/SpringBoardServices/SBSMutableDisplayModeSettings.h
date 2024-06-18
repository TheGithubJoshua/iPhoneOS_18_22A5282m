@interface SBSMutableDisplayModeSettings : SBSDisplayModeSettings

@property (nonatomic) unsigned long long scale;
@property (nonatomic) long long overscanCompensation;

- (void)setScale:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOverscanCompensation:(long long)a0;

@end
