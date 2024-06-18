@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

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