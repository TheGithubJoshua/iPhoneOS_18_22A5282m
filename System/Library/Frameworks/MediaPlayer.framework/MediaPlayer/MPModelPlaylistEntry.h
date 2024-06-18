@class MPModelTVEpisode, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__playlist_KEY;
+ (long long)genericObjectType;
+ (id)__song_KEY;
+ (id)__movie_KEY;
+ (id)kindWithKinds:(id)a0;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__tvEpisode_KEY;
+ (id)___artworkCatalog_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;

- (id)humanDescription;
- (long long)type;
- (id)anyObject;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
