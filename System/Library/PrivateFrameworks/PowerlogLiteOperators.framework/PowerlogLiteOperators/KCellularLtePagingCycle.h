@interface KCellularLtePagingCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char earfcn : 1; unsigned char nbMs : 1; unsigned char pagingCycleMs : 1; unsigned char phyCellId : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEarfcn;
@property (nonatomic) unsigned int earfcn;
@property (nonatomic) BOOL hasPhyCellId;
@property (nonatomic) unsigned int phyCellId;
@property (nonatomic) BOOL hasNbMs;
@property (nonatomic) unsigned int nbMs;
@property (nonatomic) BOOL hasPagingCycleMs;
@property (nonatomic) unsigned int pagingCycleMs;
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

@end
