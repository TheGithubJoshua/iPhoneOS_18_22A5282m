@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (double)settingScale;
- (double)settingYAcceleration;
- (id)settingStyle;
- (id)initWithSettings:(id)a0;
- (void)setSettingZAcceleration:(double)a0;
- (float)settingLifetimeRange;
- (void)setSettingSpinRange:(double)a0;
- (double)settingZAcceleration;
- (void)setSettingVelocity:(double)a0;
- (float)settingGreenSpeed;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingColor:(id)a0;
- (id)settingName;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)settingAlphaRange;
- (void)setSettingLifetime:(float)a0;
- (BOOL)settingEnabled;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (double)settingVelocity;
- (float)settingBirthRate;
- (id)settingEmitterCells;
- (void)setSettingEmissionLatitude:(double)a0;
- (float)settingRedRange;
- (void)parentLoaded:(id)a0;
- (float)settingBlueRange;
- (void)setSettingXAcceleration:(double)a0;
- (double)settingEmissionLongitude;
- (void)setSettingName:(id)a0;
- (void)setSettingYAcceleration:(double)a0;
- (float)settingMinificationFilterBias;
- (float)settingGreenRange;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingGreenRange:(float)a0;
- (double)settingVelocityRange;
- (float)settingBlueSpeed;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingEmissionRange:(double)a0;
- (float)settingRedSpeed;
- (void)setSettingStyle:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingEmissionRange;
- (double)settingSpinRange;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingRedRange:(float)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingScaleRange:(double)a0;
- (float)settingLifetime;
- (id)settingMagnificationFilter;
- (void)setSettingRedSpeed:(float)a0;
- (id)settingContents;
- (float)settingAlphaSpeed;
- (void)setSettingScale:(double)a0;
- (void)setSettingContents:(id)a0;
- (id)settingColor;
- (void)dealloc;
- (double)settingSpin;
- (double)settingScaleRange;
- (id)settingMinificationFilter;
- (void)setSettingLifetimeRange:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (double)settingXAcceleration;
- (void)setSettingBirthRate:(float)a0;
- (void)setSettingAlphaRange:(float)a0;
- (double)settingScaleSpeed;
- (void)setSettingBlueRange:(float)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (double)settingEmissionLatitude;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingSpin:(double)a0;
- (void)setSettingEmissionLongitude:(double)a0;

@end
