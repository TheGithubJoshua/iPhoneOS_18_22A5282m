@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char resultErrorCode : 1; unsigned char source : 1; unsigned char wasNewUpdateFetched : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) unsigned int resultErrorCode;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasWasNewUpdateFetched;
@property (nonatomic) BOOL wasNewUpdateFetched;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
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
