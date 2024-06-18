@interface KCellularRrcModeHist : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connDurBin0 : 1; unsigned char connDurBin1 : 1; unsigned char connDurBin10 : 1; unsigned char connDurBin11 : 1; unsigned char connDurBin12 : 1; unsigned char connDurBin2 : 1; unsigned char connDurBin3 : 1; unsigned char connDurBin4 : 1; unsigned char connDurBin5 : 1; unsigned char connDurBin6 : 1; unsigned char connDurBin7 : 1; unsigned char connDurBin8 : 1; unsigned char connDurBin9 : 1; unsigned char durationMs : 1; unsigned char idleDurBin0 : 1; unsigned char idleDurBin1 : 1; unsigned char idleDurBin10 : 1; unsigned char idleDurBin11 : 1; unsigned char idleDurBin12 : 1; unsigned char idleDurBin2 : 1; unsigned char idleDurBin3 : 1; unsigned char idleDurBin4 : 1; unsigned char idleDurBin5 : 1; unsigned char idleDurBin6 : 1; unsigned char idleDurBin7 : 1; unsigned char idleDurBin8 : 1; unsigned char idleDurBin9 : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasIdleDurBin0;
@property (nonatomic) unsigned int idleDurBin0;
@property (nonatomic) BOOL hasIdleDurBin1;
@property (nonatomic) unsigned int idleDurBin1;
@property (nonatomic) BOOL hasIdleDurBin2;
@property (nonatomic) unsigned int idleDurBin2;
@property (nonatomic) BOOL hasIdleDurBin3;
@property (nonatomic) unsigned int idleDurBin3;
@property (nonatomic) BOOL hasIdleDurBin4;
@property (nonatomic) unsigned int idleDurBin4;
@property (nonatomic) BOOL hasIdleDurBin5;
@property (nonatomic) unsigned int idleDurBin5;
@property (nonatomic) BOOL hasIdleDurBin6;
@property (nonatomic) unsigned int idleDurBin6;
@property (nonatomic) BOOL hasIdleDurBin7;
@property (nonatomic) unsigned int idleDurBin7;
@property (nonatomic) BOOL hasIdleDurBin8;
@property (nonatomic) unsigned int idleDurBin8;
@property (nonatomic) BOOL hasIdleDurBin9;
@property (nonatomic) unsigned int idleDurBin9;
@property (nonatomic) BOOL hasIdleDurBin10;
@property (nonatomic) unsigned int idleDurBin10;
@property (nonatomic) BOOL hasIdleDurBin11;
@property (nonatomic) unsigned int idleDurBin11;
@property (nonatomic) BOOL hasIdleDurBin12;
@property (nonatomic) unsigned int idleDurBin12;
@property (nonatomic) BOOL hasConnDurBin0;
@property (nonatomic) unsigned int connDurBin0;
@property (nonatomic) BOOL hasConnDurBin1;
@property (nonatomic) unsigned int connDurBin1;
@property (nonatomic) BOOL hasConnDurBin2;
@property (nonatomic) unsigned int connDurBin2;
@property (nonatomic) BOOL hasConnDurBin3;
@property (nonatomic) unsigned int connDurBin3;
@property (nonatomic) BOOL hasConnDurBin4;
@property (nonatomic) unsigned int connDurBin4;
@property (nonatomic) BOOL hasConnDurBin5;
@property (nonatomic) unsigned int connDurBin5;
@property (nonatomic) BOOL hasConnDurBin6;
@property (nonatomic) unsigned int connDurBin6;
@property (nonatomic) BOOL hasConnDurBin7;
@property (nonatomic) unsigned int connDurBin7;
@property (nonatomic) BOOL hasConnDurBin8;
@property (nonatomic) unsigned int connDurBin8;
@property (nonatomic) BOOL hasConnDurBin9;
@property (nonatomic) unsigned int connDurBin9;
@property (nonatomic) BOOL hasConnDurBin10;
@property (nonatomic) unsigned int connDurBin10;
@property (nonatomic) BOOL hasConnDurBin11;
@property (nonatomic) unsigned int connDurBin11;
@property (nonatomic) BOOL hasConnDurBin12;
@property (nonatomic) unsigned int connDurBin12;
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