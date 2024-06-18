@class NSString, MIPSmartPlaylistInfo, NSMutableArray, MIPMultiverseIdentifier;

@interface MIPPlaylist : PBCodable <NSCopying> {
    struct { unsigned char authorStoreId : 1; unsigned char cloudLastUpdateTime : 1; unsigned char creationDateTime : 1; unsigned char favoritedDateTime : 1; unsigned char lastPlayedDateTime : 1; unsigned char minRefreshInterval : 1; unsigned char modificationDateTime : 1; unsigned char storeId : 1; unsigned char distinguishedKind : 1; unsigned char favoriteState : 1; unsigned char likedState : 1; unsigned char playCount : 1; unsigned char playlistCategoryTypeMask : 1; unsigned char remoteSourceType : 1; unsigned char secondaryArtworkSourceType : 1; unsigned char sortType : 1; unsigned char subscriberCount : 1; unsigned char subscriberLikedCount : 1; unsigned char subscriberPlayCount : 1; unsigned char traits : 1; unsigned char type : 1; unsigned char cloudIsCuratorPlaylist : 1; unsigned char cloudIsSharingDisabled : 1; unsigned char cloudIsSubscribed : 1; unsigned char editable : 1; unsigned char externalVendorPlaylist : 1; unsigned char hidden : 1; unsigned char owner : 1; unsigned char reversedSorting : 1; unsigned char shared : 1; unsigned char visible : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL hasSmartPlaylistInfo;
@property (retain, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) int sortType;
@property (nonatomic) BOOL hasReversedSorting;
@property (nonatomic) BOOL reversedSorting;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *parentIdentifier;
@property (readonly, nonatomic) BOOL hasGeniusSeedTrackIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *geniusSeedTrackIdentifier;
@property (nonatomic) BOOL hasDistinguishedKind;
@property (nonatomic) int distinguishedKind;
@property (readonly, nonatomic) BOOL hasCloudGlobalId;
@property (retain, nonatomic) NSString *cloudGlobalId;
@property (nonatomic) BOOL hasCloudIsSubscribed;
@property (nonatomic) BOOL cloudIsSubscribed;
@property (nonatomic) BOOL hasCloudIsCuratorPlaylist;
@property (nonatomic) BOOL cloudIsCuratorPlaylist;
@property (readonly, nonatomic) BOOL hasExternalVendorIdentifier;
@property (retain, nonatomic) NSString *externalVendorIdentifier;
@property (readonly, nonatomic) BOOL hasExternalVendorDisplayName;
@property (retain, nonatomic) NSString *externalVendorDisplayName;
@property (readonly, nonatomic) BOOL hasExternalVendorTag;
@property (retain, nonatomic) NSString *externalVendorTag;
@property (nonatomic) BOOL hasExternalVendorPlaylist;
@property (nonatomic) BOOL externalVendorPlaylist;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) long long creationDateTime;
@property (nonatomic) BOOL hasModificationDateTime;
@property (nonatomic) long long modificationDateTime;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) long long lastPlayedDateTime;
@property (nonatomic) BOOL hasCloudIsSharingDisabled;
@property (nonatomic) BOOL cloudIsSharingDisabled;
@property (readonly, nonatomic) BOOL hasCloudVersionHash;
@property (retain, nonatomic) NSString *cloudVersionHash;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) BOOL hasRemoteSourceType;
@property (nonatomic) int remoteSourceType;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) BOOL owner;
@property (nonatomic) BOOL hasEditable;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) int playCount;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL hasVisible;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasAuthorStoreId;
@property (nonatomic) long long authorStoreId;
@property (readonly, nonatomic) BOOL hasAuthorDisplayName;
@property (retain, nonatomic) NSString *authorDisplayName;
@property (readonly, nonatomic) BOOL hasAuthorStoreURL;
@property (retain, nonatomic) NSString *authorStoreURL;
@property (readonly, nonatomic) BOOL hasAuthorHandle;
@property (retain, nonatomic) NSString *authorHandle;
@property (nonatomic) BOOL hasMinRefreshInterval;
@property (nonatomic) long long minRefreshInterval;
@property (nonatomic) BOOL hasCloudLastUpdateTime;
@property (nonatomic) long long cloudLastUpdateTime;
@property (nonatomic) BOOL hasSubscriberCount;
@property (nonatomic) int subscriberCount;
@property (nonatomic) BOOL hasSubscriberPlayCount;
@property (nonatomic) int subscriberPlayCount;
@property (nonatomic) BOOL hasSubscriberLikedCount;
@property (nonatomic) int subscriberLikedCount;
@property (readonly, nonatomic) BOOL hasSubscriberURL;
@property (retain, nonatomic) NSString *subscriberURL;
@property (readonly, nonatomic) BOOL hasPlaylistDescription;
@property (retain, nonatomic) NSString *playlistDescription;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (nonatomic) BOOL hasSecondaryArtworkSourceType;
@property (nonatomic) int secondaryArtworkSourceType;
@property (readonly, nonatomic) BOOL hasSecondaryArtworkId;
@property (retain, nonatomic) NSString *secondaryArtworkId;
@property (nonatomic) BOOL hasPlaylistCategoryTypeMask;
@property (nonatomic) int playlistCategoryTypeMask;
@property (readonly, nonatomic) BOOL hasPlaylistGroupingSortKey;
@property (retain, nonatomic) NSString *playlistGroupingSortKey;
@property (nonatomic) BOOL hasFavoriteState;
@property (nonatomic) int favoriteState;
@property (nonatomic) BOOL hasFavoritedDateTime;
@property (nonatomic) long long favoritedDateTime;
@property (nonatomic) BOOL hasTraits;
@property (nonatomic) int traits;
@property (retain, nonatomic) NSMutableArray *childIdentifiers;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)childIdentifiersType;

- (void)clearItems;
- (int)StringAsType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)itemsCount;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)addItems:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemsAtIndex:(unsigned long long)a0;
- (int)StringAsSortType:(id)a0;
- (id)sortTypeAsString:(int)a0;
- (void)addChildIdentifiers:(id)a0;
- (id)childIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)childIdentifiersCount;
- (void)clearChildIdentifiers;

@end