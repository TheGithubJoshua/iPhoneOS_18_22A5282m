@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {
    int _autoPlayMode;
    int _repeatPlayMode;
    int _shufflePlayMode;
    struct { unsigned char autoPlayMode : 1; unsigned char repeatPlayMode : 1; unsigned char shufflePlayMode : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
