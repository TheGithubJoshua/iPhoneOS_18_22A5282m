@class NSData, NSString;

@interface NPKProtoRemotePassActionEnvelope : PBCodable <NSCopying> {
    struct { unsigned char cardType : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) int messageType;
@property (retain, nonatomic) NSData *messageProtoData;
@property (nonatomic) BOOL isResponse;
@property (readonly, nonatomic) BOOL hasCaption;
@property (retain, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL hasPassLocalizedDescription;
@property (retain, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) BOOL hasSummaryText;
@property (retain, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) BOOL hasPassOrganizationName;
@property (retain, nonatomic) NSString *passOrganizationName;
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) int cardType;

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
- (int)StringAsCardType:(id)a0;
- (id)cardTypeAsString:(int)a0;

@end
