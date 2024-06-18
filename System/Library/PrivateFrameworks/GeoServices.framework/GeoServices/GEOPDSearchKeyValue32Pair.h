@class NSString;

@interface GEOPDSearchKeyValue32Pair : PBCodable <NSCopying> {
    NSString *_key;
    unsigned int _value;
    struct { unsigned char has_value : 1; } _flags;
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