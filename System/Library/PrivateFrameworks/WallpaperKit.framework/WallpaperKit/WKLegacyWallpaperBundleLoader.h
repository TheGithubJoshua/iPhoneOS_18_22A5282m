@class NSFileManager, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WKLegacyWallpaperBundleLoader : NSObject

@property (class, readonly, nonatomic) WKLegacyWallpaperBundleLoader *defaultWallpaperBundleLoader;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) NSFileManager *_fileManager;
@property (retain, nonatomic) NSDictionary *_wallpaperBundleLookup;

+ (id)legacyWallpaperDirectories;

- (id)init;
- (id)wallpaperBundleForIdentifier:(long long)a0;
- (void).cxx_destruct;
- (void)_loadAllValidWallpaperBundlesFromLegacyLocation;

@end
