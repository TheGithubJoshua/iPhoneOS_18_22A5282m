@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {
    NSMutableArray *_places;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *places;

+ (BOOL)isValid:(id)a0;
+ (Class)placeType;

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
- (id)jsonRepresentation;
- (int)StringAsStatusCode:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;
- (id)statusCodeAsString:(int)a0;

@end
