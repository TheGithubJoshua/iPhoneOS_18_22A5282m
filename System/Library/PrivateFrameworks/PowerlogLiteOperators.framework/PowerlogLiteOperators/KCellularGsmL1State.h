@interface KCellularGsmL1State : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char l1State : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasL1State;
@property (nonatomic) int l1State;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsL1State:(id)a0;
- (id)l1StateAsString:(int)a0;

@end
