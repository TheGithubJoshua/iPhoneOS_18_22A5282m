@class NSMutableArray;

@interface KCellularProtocolStackCpuStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char voltageVm : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasVoltageVm;
@property (nonatomic) unsigned int voltageVm;
@property (retain, nonatomic) NSMutableArray *cores;

+ (Class)coresType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCores:(id)a0;
- (void)clearCores;
- (id)coresAtIndex:(unsigned long long)a0;
- (unsigned long long)coresCount;

@end
