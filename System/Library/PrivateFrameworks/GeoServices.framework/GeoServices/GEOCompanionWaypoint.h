@class GEOMapItemStorage, NSString, GEOWaypointTyped, GEOLocation, PBDataReader;

@interface GEOCompanionWaypoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItem;
    NSString *_searchString;
    GEOWaypointTyped *_waypointTyped;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isCurrentLocation;
    struct { unsigned char has_isCurrentLocation : 1; unsigned char read_mapItem : 1; unsigned char read_searchString : 1; unsigned char read_waypointTyped : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) BOOL hasMapItem;
@property (retain, nonatomic) GEOMapItemStorage *mapItem;
@property (readonly, nonatomic) BOOL hasWaypointTyped;
@property (retain, nonatomic) GEOWaypointTyped *waypointTyped;
@property (nonatomic) BOOL hasIsCurrentLocation;
@property (nonatomic) BOOL isCurrentLocation;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)initWithComposedWaypoint:(id)a0;

@end
