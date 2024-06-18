@class PBUIWallpaperDefaultsDomain, NSString, PBUIWallpaperDefaults;

@interface PBUIWallpaperUserDefaultsDataStore : NSObject <PBUIWallpaperDataStore, BSDescriptionProviding>

@property (readonly, nonatomic) PBUIWallpaperDefaults *wallpaperDefaults;
@property (readonly, nonatomic) PBUIWallpaperDefaultsDomain *defaultsDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWallpaperColorForVariants:(long long)a0;
- (BOOL)setWallpaperThumbnailData:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeWallpaperImageHashDataForVariants:(long long)a0;
- (BOOL)setWallpaperColor:(id)a0 forVariants:(long long)a1;
- (BOOL)setWallpaperGradient:(id)a0 forVariants:(long long)a1;
- (void)removeWallpaperGradientForVariants:(long long)a0;
- (BOOL)setWallpaperOptions:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeProceduralWallpaperForVariants:(long long)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(long long)a1;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)supportsWallpaperImageHashDataStorage;
- (id)initWithUserdefaultsDomain:(id)a0;
- (id)verifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)hasWallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)succinctDescription;
- (void)removeWallpaperOptionsForVariants:(long long)a0;
- (BOOL)setVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperImageHashDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)setWallpaperOriginalImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setWallpaperImage:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)setProceduralWallpaperInfo:(id)a0 forVariants:(long long)a1;
- (BOOL)setWallpaperImageHashData:(id)a0 forVariants:(long long)a1 wallpaperMode:(long long)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)wallpaperGradientForVariant:(long long)a0;
- (void)removeVideoForVariant:(long long)a0;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)a0 options:(id)a1 forVariant:(long long)a2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)a0 fromVariant:(long long)a1 toVariant:(long long)a2;
- (id)wallpaperOriginalImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)setOriginalVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (void)removeWallpaperImageDataTypes:(unsigned long long)a0 forVariants:(long long)a1;
- (id)wallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)proceduralWallpaperInfoForVariant:(long long)a0;

@end
