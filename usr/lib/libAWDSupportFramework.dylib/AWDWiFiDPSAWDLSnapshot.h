@interface AWDWiFiDPSAWDLSnapshot : PBCodable <NSCopying> {
    struct { unsigned char ts : 1; unsigned char duration : 1; unsigned char sdb : 1; unsigned char use : 1; } _has;
}

@property (nonatomic) BOOL hasTs;
@property (nonatomic) unsigned long long ts;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasUse;
@property (nonatomic) unsigned int use;
@property (nonatomic) BOOL hasSdb;
@property (nonatomic) unsigned int sdb;

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
