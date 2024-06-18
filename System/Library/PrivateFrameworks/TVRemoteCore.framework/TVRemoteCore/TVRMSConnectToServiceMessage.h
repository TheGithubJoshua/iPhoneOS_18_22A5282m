@class NSString, TVRMSServiceMessage;

@interface TVRMSConnectToServiceMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) TVRMSServiceMessage *service;
@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;

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
