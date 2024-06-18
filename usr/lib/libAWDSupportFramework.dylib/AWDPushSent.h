@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char dualChannelState : 1; unsigned char error : 1; unsigned char flushes : 1; unsigned char linkQuality : 1; unsigned char payloadSize : 1; unsigned char sendDuration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasFlushes;
@property (nonatomic) unsigned int flushes;
@property (nonatomic) BOOL hasSendDuration;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) unsigned int dualChannelState;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;

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