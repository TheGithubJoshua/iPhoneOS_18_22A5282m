@class PBUIWallpaperDefaultsDomain;

@interface PBUIWallpaperDefaults : NSObject

@property (readonly, nonatomic) PBUIWallpaperDefaultsDomain *defaultsDomain;

+ (id)defaults;

- (id)init;
- (void)updateDefaultsForLocations:(long long)a0 updater:(id /* block */)a1;
- (void)setHasVideo:(BOOL)a0;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (double)zoomScaleForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setStillTimeInVideo:(double)a0;
- (void)setSupportsCropping:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperGradientDataForVariant:(long long)a0;
- (id)wallpaperColorDataForVariant:(long long)a0;
- (double)stillTimeInVideoForVariant:(long long)a0;
- (void)setParallaxFactor:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setColorName:(id)a0 forLocations:(long long)a1;
- (void)resetParallaxFactorDefaults;
- (double)parallaxFactorForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (double)stillTimeInVideo;
- (void)setPortrait:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralUserSet:(BOOL)a0 forLocations:(long long)a1;
- (void)resetWallpaperKitDataDefaults;
- (void)_setDefaultsWithDictionary:(id)a0 variant:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetPortraitDefaults;
- (void)setWallpaperKitData:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)initWithdefaultsDomain:(id)a0;
- (id)wallpaperKitDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)setZoomScale:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)proceduralUserSetForVariant:(long long)a0;
- (void)setColorData:(id)a0 forLocations:(long long)a1;
- (void)resetCroppingDefaults;
- (void).cxx_destruct;
- (BOOL)isPortraitForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setGradientData:(id)a0 forLocations:(long long)a1;
- (id)description;
- (void)_updateDefaultsForVariant:(long long)a0 wallpaperMode:(long long)a1 updater:(id /* block */)a2;
- (void)setName:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralIdentifier:(id)a0 forLocations:(long long)a1;
- (void)setMagnifyEnabled:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetHasVideoDefaults;
- (id)_defaultsWrapperForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)nameForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)_keyForWallpaperMode:(long long)a0;
- (id)proceduralIdentifierForVariant:(long long)a0;
- (void)resetZoomScaleDefaults;
- (id)proceduralOptionsForVariant:(long long)a0;
- (BOOL)hasVideoForVariant:(long long)a0;
- (BOOL)hasVideo;
- (void)resetNameDefaults;
- (void)resetImageHashDefaults;
- (void)setWallpaperOptions:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetMagnifyDefaults;
- (id)imageHashForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setImageHash:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)magnifyEnabledForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)supportsCroppingForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setProceduralOptions:(id)a0 forLocations:(long long)a1;

@end
