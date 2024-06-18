@class NSString;

@interface AWDBltDelayAppReadyToSend : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char delayMs : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUniqueid;
@property (retain, nonatomic) NSString *uniqueid;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) unsigned int delayMs;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end