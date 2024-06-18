@interface GEOFlyoverRegionVersions : PBCodable <NSCopying> {
    struct GEOFlyoverRegion { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)jsonRepresentation;

@end
