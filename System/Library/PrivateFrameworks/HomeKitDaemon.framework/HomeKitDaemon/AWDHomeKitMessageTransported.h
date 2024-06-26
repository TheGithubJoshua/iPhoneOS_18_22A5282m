@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {
    struct { unsigned char payloadSize : 1; unsigned char timestamp : 1; unsigned char direction : 1; unsigned char messageType : 1; unsigned char transport : 1; unsigned char isSecure : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) unsigned long long payloadSize;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasTransactionID;
@property (retain, nonatomic) NSString *transactionID;
@property (nonatomic) BOOL hasIsSecure;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasTransport;
@property (nonatomic) int transport;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) int direction;
@property (readonly, nonatomic) BOOL hasMessageName;
@property (retain, nonatomic) NSString *messageName;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsMessageType:(id)a0;
- (int)StringAsDirection:(id)a0;
- (id)directionAsString:(int)a0;
- (int)StringAsTransport:(id)a0;
- (id)transportAsString:(int)a0;

@end
