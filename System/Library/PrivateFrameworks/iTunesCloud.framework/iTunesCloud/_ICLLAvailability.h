@interface _ICLLAvailability : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _repeatModes;
    struct { int *list; unsigned long long count; unsigned long long size; } _shuffleModes;
    BOOL _autoPlay;
    struct { unsigned char autoPlay : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
