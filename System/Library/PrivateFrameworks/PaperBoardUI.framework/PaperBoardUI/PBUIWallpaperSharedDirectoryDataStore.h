@interface PBUIWallpaperSharedDirectoryDataStore : PBUIWallpaperDirectoryDataStore

+ (id)defaultDirectoryURL;

- (void)didWriteFileToURL:(id)a0;
- (id)initWithDirectoryURL:(id)a0;
- (id)directoryCreationAttributes;

@end
