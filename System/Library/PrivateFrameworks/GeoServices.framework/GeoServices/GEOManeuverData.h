@class PBUnknownFields, GEOJunctionInfo;

@interface GEOManeuverData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOJunctionInfo *_junctionInfo;
    int _maneuverType;
    struct { unsigned char has_maneuverType : 1; } _flags;
}

@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (readonly, nonatomic) BOOL hasJunctionInfo;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
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
- (int)StringAsManeuverType:(id)a0;
- (id)maneuverTypeAsString:(int)a0;

@end
