@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {
    struct { unsigned char userauthOneof : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGsAuthToken;
@property (retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken;
@property (nonatomic) BOOL hasUserauthOneof;
@property (nonatomic) int userauthOneof;

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
- (int)StringAsUserauthOneof:(id)a0;
- (void)clearOneofValuesForUserauthOneof;
- (id)userauthOneofAsString:(int)a0;

@end
