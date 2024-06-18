@class PBUnknownFields;

@interface GEOWaypointUUID : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _high;
    unsigned long long _low;
    struct { unsigned char has_high : 1; unsigned char has_low : 1; } _flags;
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
