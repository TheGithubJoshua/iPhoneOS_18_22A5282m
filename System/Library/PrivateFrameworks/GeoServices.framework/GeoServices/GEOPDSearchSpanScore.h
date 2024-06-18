@interface GEOPDSearchSpanScore : PBCodable <NSCopying> {
    double _score;
    int _intentType;
    struct { unsigned char has_score : 1; unsigned char has_intentType : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
