@class NSString, NSMutableArray, PBDataReader;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_addressResults;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionStatus;
    struct { unsigned char has_correctionStatus : 1; unsigned char read_addressID : 1; unsigned char read_addressResults : 1; unsigned char read_significantLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionStatus;
@property (nonatomic) int correctionStatus;
@property (retain, nonatomic) NSMutableArray *significantLocations;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *addressResults;

+ (BOOL)isValid:(id)a0;
+ (Class)addressResultType;
+ (Class)significantLocationType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
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
- (int)StringAsCorrectionStatus:(id)a0;
- (void)addAddressResult:(id)a0;
- (void)addSignificantLocation:(id)a0;
- (id)addressResultAtIndex:(unsigned long long)a0;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (void)clearSignificantLocations;
- (id)correctionStatusAsString:(int)a0;
- (id)significantLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)significantLocationsCount;

@end
