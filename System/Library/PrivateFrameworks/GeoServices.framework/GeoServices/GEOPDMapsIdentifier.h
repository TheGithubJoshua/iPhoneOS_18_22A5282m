@class GEOPDShardedId, PBUnknownFields;

@interface GEOPDMapsIdentifier : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDShardedId *_shardedId;
}

@property (readonly, nonatomic) BOOL hasShardedId;
@property (retain, nonatomic) GEOPDShardedId *shardedId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isValidMapsIdentifier;

@end