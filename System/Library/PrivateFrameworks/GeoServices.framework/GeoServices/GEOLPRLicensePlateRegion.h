@class NSString, GEOMapRegionE7, NSMutableArray, PBDataReader;

@interface GEOLPRLicensePlateRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_identifier;
    NSMutableArray *_licensePlateInfos;
    GEOMapRegionE7 *_mapRegion;
    NSMutableArray *_regions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_identifier : 1; unsigned char read_licensePlateInfos : 1; unsigned char read_mapRegion : 1; unsigned char read_regions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSMutableArray *licensePlateInfos;
@property (retain, nonatomic) NSMutableArray *regions;

+ (BOOL)isValid:(id)a0;
+ (Class)licensePlateInfoType;
+ (Class)regionType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)regionsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRegion:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)regionAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)clearRegions;
- (void)addLicensePlateInfo:(id)a0;
- (void)clearLicensePlateInfos;
- (id)licensePlateInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)licensePlateInfosCount;

@end
