@class GEOLatLng, PBDataReader;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_correctedCoordinate : 1; unsigned char read_originalCoordinate : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginalCoordinate;
@property (retain, nonatomic) GEOLatLng *originalCoordinate;
@property (readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
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

@end
