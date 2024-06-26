@class NSMutableArray, NSMapTable, WKWallpaperBundleDownloadManager;

@interface WKWallpaperRepresentingCollectionsManager : NSObject

@property (class, readonly, nonatomic) WKWallpaperRepresentingCollectionsManager *defaultManager;
@property (class, readonly, nonatomic) WKWallpaperRepresentingCollectionsManager *defaultLegacyManager;

@property (retain, nonatomic) WKWallpaperBundleDownloadManager *_downloadManager;
@property (retain, nonatomic) NSMutableArray *_wallpaperCollections;
@property (retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable;
@property (nonatomic) BOOL _loadLegacyContent;
@property (readonly, nonatomic) long long numberOfWallpaperCollections;

- (void)_loadCollections;
- (id)wallpaperCollectionAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)_loadSystemWallpaperCollections;
- (id)wallpaperCollectionWithIdentifier:(id)a0;
- (id)initWithDownloadManager:(id)a0 loadLegacyContent:(BOOL)a1;
- (void)_loadLegacySystemWallpaperCollections;

@end
