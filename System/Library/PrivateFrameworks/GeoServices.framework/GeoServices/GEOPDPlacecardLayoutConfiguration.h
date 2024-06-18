@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
}

@property (retain, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)entriesType;
+ (id)placecardLayoutConfigurationPlaceData:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEntries:(id)a0;
- (id)jsonRepresentation;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (unsigned long long)entriesCount;

@end
