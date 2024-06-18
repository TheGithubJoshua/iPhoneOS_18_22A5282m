@class PBUnknownFields;

@interface GEOPDParsecQueryRankingFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _geoScore;
    double _poiScore;
    struct { unsigned char has_geoScore : 1; unsigned char has_poiScore : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
