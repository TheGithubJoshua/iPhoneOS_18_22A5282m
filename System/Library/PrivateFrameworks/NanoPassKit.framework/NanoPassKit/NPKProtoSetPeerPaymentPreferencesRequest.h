@class NSData;

@interface NPKProtoSetPeerPaymentPreferencesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerPaymentPreferencesData;
@property (retain, nonatomic) NSData *peerPaymentPreferencesData;

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
