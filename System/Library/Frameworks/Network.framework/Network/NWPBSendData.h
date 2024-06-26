@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {
    struct { unsigned char receiveWindow : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) BOOL hasReceiveWindow;
@property (nonatomic) unsigned int receiveWindow;

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

@end
