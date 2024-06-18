@class NSMutableArray, OTSecureElementPeerIdentity;

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *localPeerIdentity;
@property (retain, nonatomic) NSMutableArray *trustedPeerSecureElementIdentities;
@property (readonly, nonatomic) BOOL hasPendingLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;

+ (Class)trustedPeerSecureElementIdentitiesType;

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
- (void)addTrustedPeerSecureElementIdentities:(id)a0;
- (void)clearTrustedPeerSecureElementIdentities;
- (id)trustedPeerSecureElementIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)trustedPeerSecureElementIdentitiesCount;

@end
