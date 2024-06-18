@class VUIFamilySharingRelationships, NSString, VUIExtrasInfo, VUIFamilySharingEntity, VUIVideosPlayable, VUIFamilySharingMediaItemAssetController;

@interface VUIFamilySharingMediaItem : VUIMediaItem

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) VUIFamilySharingMediaItemAssetController *assetController;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *previewArtworkURL;
@property (retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo;
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *personalizedBuyParams;

- (id)seasonNumber;
- (id)releaseDate;
- (id)episodeNumber;
- (id)bookmark;
- (id)storeID;
- (id)showTitle;
- (id)contentDescription;
- (void).cxx_destruct;
- (id)duration;
- (id)title;
- (id)contentRating;
- (id)releaseYear;
- (id)extrasURL;
- (id)showCanonicalID;
- (id)_bestOffer;
- (id)_bestRedownloadOffer;
- (id)_itunesExtrasDictionary;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
