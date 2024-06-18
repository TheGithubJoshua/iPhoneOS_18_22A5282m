@interface GEOPDSearchKeyDoubleValue64Pair : PBCodable <NSCopying> {
    double _key;
    unsigned long long _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
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
