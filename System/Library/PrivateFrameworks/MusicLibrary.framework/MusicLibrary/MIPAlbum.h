@class NSString, MIPArtist;

@interface MIPAlbum : PBCodable <NSCopying> {
    struct { unsigned char favoritedDateTime : 1; unsigned char persistentId : 1; unsigned char storeId : 1; unsigned char favoriteState : 1; unsigned char numDiscs : 1; unsigned char numTracks : 1; unsigned char userRating : 1; unsigned char compilation : 1; } _has;
}

@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) BOOL hasNumTracks;
@property (nonatomic) int numTracks;
@property (nonatomic) BOOL hasNumDiscs;
@property (nonatomic) int numDiscs;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) BOOL hasCompilation;
@property (nonatomic) BOOL compilation;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) BOOL hasCloudId;
@property (retain, nonatomic) NSString *cloudId;
@property (nonatomic) BOOL hasFavoriteState;
@property (nonatomic) int favoriteState;
@property (nonatomic) BOOL hasFavoritedDateTime;
@property (nonatomic) long long favoritedDateTime;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
