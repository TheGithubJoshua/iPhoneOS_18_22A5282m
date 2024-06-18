@class PDSProtoUserPushToken, NSString;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying>

@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;

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
