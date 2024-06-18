@class _MRAudioFormatProtobuf, NSString, _MRAudioRouteProtobuf, NSData, NSMutableArray;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char elapsedTime : 1; unsigned char elapsedTimeTimestamp : 1; unsigned char iTunesStoreAlbumArtistIdentifier : 1; unsigned char iTunesStoreAlbumIdentifier : 1; unsigned char iTunesStoreArtistIdentifier : 1; unsigned char iTunesStoreIdentifier : 1; unsigned char iTunesStoreSubscriptionIdentifier : 1; unsigned char inferredTimestamp : 1; unsigned char legacyUniqueIdentifier : 1; unsigned char lyricsAdamID : 1; unsigned char radioStationIdentifier : 1; unsigned char releaseDate : 1; unsigned char reportingAdamID : 1; unsigned char startTime : 1; unsigned char activeFormatJustification : 1; unsigned char albumTraits : 1; unsigned char artworkDataHeightDeprecated : 1; unsigned char artworkDataWidthDeprecated : 1; unsigned char chapterCount : 1; unsigned char defaultPlaybackRate : 1; unsigned char discNumber : 1; unsigned char downloadProgress : 1; unsigned char downloadState : 1; unsigned char editingStyleFlags : 1; unsigned char episodeNumber : 1; unsigned char episodeType : 1; unsigned char formatTierPreference : 1; unsigned char mediaSubType : 1; unsigned char mediaType : 1; unsigned char numberOfSections : 1; unsigned char playCount : 1; unsigned char playbackProgress : 1; unsigned char playbackRate : 1; unsigned char playlistTraits : 1; unsigned char playlistType : 1; unsigned char radioStationType : 1; unsigned char seasonNumber : 1; unsigned char songTraits : 1; unsigned char totalDiscCount : 1; unsigned char totalTrackCount : 1; unsigned char trackNumber : 1; unsigned char artworkAvailable : 1; unsigned char hasAlternativeFormats : 1; unsigned char infoAvailable : 1; unsigned char isAdvertisement : 1; unsigned char isAlwaysLive : 1; unsigned char isContainer : 1; unsigned char isCurrentlyPlaying : 1; unsigned char isExplicitItem : 1; unsigned char isInWishList : 1; unsigned char isLiked : 1; unsigned char isLoading : 1; unsigned char isPlayable : 1; unsigned char isSharable : 1; unsigned char isSteerable : 1; unsigned char isStreamingContent : 1; unsigned char languageOptionsAvailable : 1; unsigned char lyricsAvailable : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIsContainer;
@property (nonatomic) BOOL isContainer;
@property (nonatomic) BOOL hasIsPlayable;
@property (nonatomic) BOOL isPlayable;
@property (nonatomic) BOOL hasPlaybackProgress;
@property (nonatomic) float playbackProgress;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (readonly, nonatomic) BOOL hasTrackArtistName;
@property (retain, nonatomic) NSString *trackArtistName;
@property (readonly, nonatomic) BOOL hasAlbumArtistName;
@property (retain, nonatomic) NSString *albumArtistName;
@property (readonly, nonatomic) BOOL hasDirectorName;
@property (retain, nonatomic) NSString *directorName;
@property (nonatomic) BOOL hasSeasonNumber;
@property (nonatomic) int seasonNumber;
@property (nonatomic) BOOL hasEpisodeNumber;
@property (nonatomic) int episodeNumber;
@property (nonatomic) BOOL hasReleaseDate;
@property (nonatomic) double releaseDate;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) int playCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasLocalizedContentRating;
@property (retain, nonatomic) NSString *localizedContentRating;
@property (nonatomic) BOOL hasIsExplicitItem;
@property (nonatomic) BOOL isExplicitItem;
@property (nonatomic) BOOL hasPlaylistType;
@property (nonatomic) int playlistType;
@property (nonatomic) BOOL hasRadioStationType;
@property (nonatomic) int radioStationType;
@property (nonatomic) BOOL hasArtworkAvailable;
@property (nonatomic) BOOL artworkAvailable;
@property (nonatomic) BOOL hasInfoAvailable;
@property (nonatomic) BOOL infoAvailable;
@property (nonatomic) BOOL hasLanguageOptionsAvailable;
@property (nonatomic) BOOL languageOptionsAvailable;
@property (nonatomic) BOOL hasNumberOfSections;
@property (nonatomic) int numberOfSections;
@property (nonatomic) BOOL hasLyricsAvailable;
@property (nonatomic) BOOL lyricsAvailable;
@property (nonatomic) BOOL hasEditingStyleFlags;
@property (nonatomic) int editingStyleFlags;
@property (nonatomic) BOOL hasIsStreamingContent;
@property (nonatomic) BOOL isStreamingContent;
@property (nonatomic) BOOL hasIsCurrentlyPlaying;
@property (nonatomic) BOOL isCurrentlyPlaying;
@property (readonly, nonatomic) BOOL hasCollectionIdentifier;
@property (retain, nonatomic) NSString *collectionIdentifier;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) BOOL hasArtworkMIMEType;
@property (retain, nonatomic) NSString *artworkMIMEType;
@property (readonly, nonatomic) BOOL hasAssetURLString;
@property (retain, nonatomic) NSString *assetURLString;
@property (readonly, nonatomic) BOOL hasComposer;
@property (retain, nonatomic) NSString *composer;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) double elapsedTime;
@property (readonly, nonatomic) BOOL hasGenre;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL isAlwaysLive;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) BOOL hasChapterCount;
@property (nonatomic) int chapterCount;
@property (nonatomic) BOOL hasTotalDiscCount;
@property (nonatomic) int totalDiscCount;
@property (nonatomic) BOOL hasTotalTrackCount;
@property (nonatomic) int totalTrackCount;
@property (nonatomic) BOOL hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (readonly, nonatomic) BOOL hasContentIdentifier;
@property (retain, nonatomic) NSString *contentIdentifier;
@property (nonatomic) BOOL hasIsSharable;
@property (nonatomic) BOOL isSharable;
@property (nonatomic) BOOL hasIsLiked;
@property (nonatomic) BOOL isLiked;
@property (nonatomic) BOOL hasIsInWishList;
@property (nonatomic) BOOL isInWishList;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (nonatomic) long long radioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (retain, nonatomic) NSString *radioStationName;
@property (readonly, nonatomic) BOOL hasRadioStationString;
@property (retain, nonatomic) NSString *radioStationString;
@property (nonatomic) BOOL hasITunesStoreIdentifier;
@property (nonatomic) long long iTunesStoreIdentifier;
@property (nonatomic) BOOL hasITunesStoreSubscriptionIdentifier;
@property (nonatomic) long long iTunesStoreSubscriptionIdentifier;
@property (nonatomic) BOOL hasITunesStoreArtistIdentifier;
@property (nonatomic) long long iTunesStoreArtistIdentifier;
@property (nonatomic) BOOL hasITunesStoreAlbumIdentifier;
@property (nonatomic) long long iTunesStoreAlbumIdentifier;
@property (readonly, nonatomic) BOOL hasPurchaseInfoData;
@property (retain, nonatomic) NSData *purchaseInfoData;
@property (nonatomic) BOOL hasDefaultPlaybackRate;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) int downloadState;
@property (nonatomic) BOOL hasDownloadProgress;
@property (nonatomic) float downloadProgress;
@property (readonly, nonatomic) BOOL hasAppMetricsData;
@property (retain, nonatomic) NSData *appMetricsData;
@property (readonly, nonatomic) BOOL hasSeriesName;
@property (retain, nonatomic) NSString *seriesName;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaSubType;
@property (nonatomic) int mediaSubType;
@property (readonly, nonatomic) BOOL hasNowPlayingInfoData;
@property (retain, nonatomic) NSData *nowPlayingInfoData;
@property (readonly, nonatomic) BOOL hasUserInfoData;
@property (retain, nonatomic) NSData *userInfoData;
@property (nonatomic) BOOL hasIsSteerable;
@property (nonatomic) BOOL isSteerable;
@property (readonly, nonatomic) BOOL hasArtworkURL;
@property (retain, nonatomic) NSString *artworkURL;
@property (readonly, nonatomic) BOOL hasLyricsURL;
@property (retain, nonatomic) NSString *lyricsURL;
@property (readonly, nonatomic) BOOL hasDeviceSpecificUserInfoData;
@property (retain, nonatomic) NSData *deviceSpecificUserInfoData;
@property (readonly, nonatomic) BOOL hasCollectionInfoData;
@property (retain, nonatomic) NSData *collectionInfoData;
@property (nonatomic) BOOL hasElapsedTimeTimestamp;
@property (nonatomic) double elapsedTimeTimestamp;
@property (nonatomic) BOOL hasInferredTimestamp;
@property (nonatomic) double inferredTimestamp;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasArtworkDataWidthDeprecated;
@property (nonatomic) int artworkDataWidthDeprecated;
@property (nonatomic) BOOL hasArtworkDataHeightDeprecated;
@property (nonatomic) int artworkDataHeightDeprecated;
@property (readonly, nonatomic) BOOL hasCurrentPlaybackDateData;
@property (retain, nonatomic) NSData *currentPlaybackDateData;
@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL hasIsLoading;
@property (nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL hasArtworkURLTemplatesData;
@property (retain, nonatomic) NSData *artworkURLTemplatesData;
@property (nonatomic) BOOL hasLegacyUniqueIdentifier;
@property (nonatomic) long long legacyUniqueIdentifier;
@property (nonatomic) BOOL hasEpisodeType;
@property (nonatomic) int episodeType;
@property (readonly, nonatomic) BOOL hasArtworkFileURL;
@property (retain, nonatomic) NSString *artworkFileURL;
@property (readonly, nonatomic) BOOL hasBrandIdentifier;
@property (retain, nonatomic) NSString *brandIdentifier;
@property (readonly, nonatomic) BOOL hasLocalizedDurationString;
@property (retain, nonatomic) NSString *localizedDurationString;
@property (readonly, nonatomic) BOOL hasAlbumYear;
@property (retain, nonatomic) NSString *albumYear;
@property (nonatomic) BOOL hasSongTraits;
@property (nonatomic) int songTraits;
@property (nonatomic) BOOL hasAlbumTraits;
@property (nonatomic) int albumTraits;
@property (nonatomic) BOOL hasPlaylistTraits;
@property (nonatomic) int playlistTraits;
@property (readonly, nonatomic) BOOL hasPreferredFormat;
@property (retain, nonatomic) _MRAudioFormatProtobuf *preferredFormat;
@property (readonly, nonatomic) BOOL hasActiveFormat;
@property (retain, nonatomic) _MRAudioFormatProtobuf *activeFormat;
@property (nonatomic) BOOL hasActiveFormatJustification;
@property (nonatomic) int activeFormatJustification;
@property (nonatomic) BOOL hasFormatTierPreference;
@property (nonatomic) int formatTierPreference;
@property (readonly, nonatomic) BOOL hasAudioRoute;
@property (retain, nonatomic) _MRAudioRouteProtobuf *audioRoute;
@property (retain, nonatomic) NSMutableArray *alternativeFormats;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL isAdvertisement;
@property (nonatomic) BOOL hasHasAlternativeFormats;
@property (nonatomic) BOOL hasAlternativeFormats;
@property (readonly, nonatomic) BOOL hasParticipantName;
@property (retain, nonatomic) NSString *participantName;
@property (readonly, nonatomic) BOOL hasParticipantIdentifier;
@property (retain, nonatomic) NSString *participantIdentifier;
@property (readonly, nonatomic) BOOL hasClassicalWork;
@property (retain, nonatomic) NSString *classicalWork;
@property (nonatomic) BOOL hasReportingAdamID;
@property (nonatomic) long long reportingAdamID;
@property (nonatomic) BOOL hasLyricsAdamID;
@property (nonatomic) long long lyricsAdamID;
@property (nonatomic) BOOL hasITunesStoreAlbumArtistIdentifier;
@property (nonatomic) long long iTunesStoreAlbumArtistIdentifier;
@property (readonly, nonatomic) BOOL hasDurationStringLocalizationKey;
@property (retain, nonatomic) NSString *durationStringLocalizationKey;

+ (Class)alternativeFormatsType;

- (id)formatTierPreferenceAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)songTraitsAsString:(int)a0;
- (int)StringAsPlaylistTraits:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)alternativeFormatsCount;
- (int)StringAsFormatTierPreference:(id)a0;
- (int)StringAsActiveFormatJustification:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)alternativeFormatsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAlternativeFormats;
- (int)StringAsSongTraits:(id)a0;
- (id)albumTraitsAsString:(int)a0;
- (id)playlistTraitsAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAlternativeFormats:(id)a0;
- (id)activeFormatJustificationAsString:(int)a0;
- (int)StringAsAlbumTraits:(id)a0;

@end