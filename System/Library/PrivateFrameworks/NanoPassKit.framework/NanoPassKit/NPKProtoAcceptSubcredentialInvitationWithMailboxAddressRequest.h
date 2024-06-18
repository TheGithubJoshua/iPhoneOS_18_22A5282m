@class NSString;

@interface NPKProtoAcceptSubcredentialInvitationWithMailboxAddressRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *mailboxAddress;
@property (readonly, nonatomic) BOOL hasActivationCode;
@property (retain, nonatomic) NSString *activationCode;

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
