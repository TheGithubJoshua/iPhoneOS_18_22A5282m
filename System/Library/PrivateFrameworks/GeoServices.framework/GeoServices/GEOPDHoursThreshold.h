@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _closingSoonMessageThresholdSecond;
    unsigned int _openingSoonMessageThresholdSecond;
    struct { unsigned char has_closingSoonMessageThresholdSecond : 1; unsigned char has_openingSoonMessageThresholdSecond : 1; } _flags;
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
