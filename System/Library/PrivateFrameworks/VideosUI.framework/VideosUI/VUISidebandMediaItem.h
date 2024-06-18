@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController;

- (id)seasonNumber;
- (id)releaseDate;
- (id)addedDate;
- (id)episodeNumber;
- (id)isPlayable;
- (id)storeID;
- (id)showTitle;
- (void).cxx_destruct;
- (id)isLocal;
- (id)duration;
- (void)dealloc;
- (id)title;
- (id)availabilityEndDate;
- (id)brandName;
- (id)brandID;
- (id)canonicalID;
- (id)seasonTitle;
- (id)colorCapability;
- (BOOL)markedAsDeleted;
- (id)HLSColorCapability;
- (id)showCanonicalID;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)a0;
- (BOOL)allowsManualDownloadRenewal;
- (id)downloadExpirationDate;
- (id)episodeIndexInSeries;
- (id)fractionalEpisodeNumber;
- (id)genreTitle;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 videoManagedObject:(id)a1 requestedProperties:(id)a2;
- (BOOL)renewsOfflineKeysAutomatically;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
