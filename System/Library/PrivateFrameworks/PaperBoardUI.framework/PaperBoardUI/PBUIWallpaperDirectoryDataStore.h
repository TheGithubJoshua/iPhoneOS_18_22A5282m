@class NSURL, NSDictionary, NSString;

@interface PBUIWallpaperDirectoryDataStore : NSObject <PBUIWallpaperDataStore, BSDescriptionProviding>

@property (class, readonly, copy, nonatomic) NSURL *defaultDirectoryURL;

@property (readonly, copy, nonatomic) NSDictionary *directoryCreationAttributes;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (nonatomic) BOOL supportsWallpaperOptions;
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
- (id)wallpaperOptionsURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(long long)a1;
- (id)verifiedOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)supportsWallpaperImageHashDataStorage;
- (void)createDirectory;
- (id)verifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)didWriteFileToURL:(id)a0;
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
- (id)wallpaperVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)removeVideoForVariant:(long long)a0;
- (void)moveWallpaperImageDataTypes:(unsigned long long)a0 fromVariant:(long long)a1 toVariant:(long long)a2;
- (BOOL)copyVideoAtURL:(id)a0 toURL:(id)a1;
- (id)wallpaperOriginalImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorForVariant:(long long)a0;
- (id)wallpaperImageURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)unverifiedVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)setOriginalVideoURL:(id)a0 forVariant:(long long)a1 wallpaperMode:(long long)a2;
- (id)initWithDirectoryURL:(id)a0;
- (void)removeWallpaperImageDataTypes:(unsigned long long)a0 forVariants:(long long)a1;
- (id)wallpaperImageForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperThumbnailDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOriginalImageURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOriginalVideoURLForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)proceduralWallpaperInfoForVariant:(long long)a0;
- (id)wallpaperThumbnailURLForVariant:(long long)a0 wallpaperMode:(long long)a1;

@end
