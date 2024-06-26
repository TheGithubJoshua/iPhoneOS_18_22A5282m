@interface AWDIDSMagnetCorruptionDetailed : PBCodable <NSCopying> {
    struct { unsigned char correctFramesSinceLastCorruption : 1; unsigned char correctRawBytesSinceLastCorruption : 1; unsigned char discardedRawBytes : 1; unsigned char linkType : 1; unsigned char recoveryTimeInMs : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) BOOL hasDiscardedRawBytes;
@property (nonatomic) unsigned long long discardedRawBytes;
@property (nonatomic) BOOL hasCorrectRawBytesSinceLastCorruption;
@property (nonatomic) unsigned long long correctRawBytesSinceLastCorruption;
@property (nonatomic) BOOL hasCorrectFramesSinceLastCorruption;
@property (nonatomic) unsigned long long correctFramesSinceLastCorruption;
@property (nonatomic) BOOL hasRecoveryTimeInMs;
@property (nonatomic) unsigned long long recoveryTimeInMs;

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
