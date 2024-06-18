@class NSMutableArray;

@interface FCCKPConfiguration : PBCodable <NSCopying> {
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray *_fields;
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
