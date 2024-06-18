@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _placeDataComponents;
    int _actionComponent;
    struct { unsigned char has_actionComponent : 1; } _flags;
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
