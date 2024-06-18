@class PBUnknownFields;

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _showVehicleNumber;
    struct { unsigned char has_showVehicleNumber : 1; } _flags;
}

@property (nonatomic) BOOL hasShowVehicleNumber;
@property (nonatomic) BOOL showVehicleNumber;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
