@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {
    struct { unsigned char locationType : 1; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

- (int)StringAsLocationType:(id)a0;
- (id)locationTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
