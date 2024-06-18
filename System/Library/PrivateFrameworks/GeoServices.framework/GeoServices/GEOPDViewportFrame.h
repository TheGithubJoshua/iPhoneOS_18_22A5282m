@class GEOPDGeographicCoordinate, PBUnknownFields;

@interface GEOPDViewportFrame : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDGeographicCoordinate *_targetPoint;
    float _distance;
    float _heading;
    float _pitch;
    struct { unsigned char has_distance : 1; unsigned char has_heading : 1; unsigned char has_pitch : 1; } _flags;
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
