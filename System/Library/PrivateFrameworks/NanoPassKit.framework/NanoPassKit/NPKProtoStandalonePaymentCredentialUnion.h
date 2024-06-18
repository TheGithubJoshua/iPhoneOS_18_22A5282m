@class NSString, NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFlowIdentifier;
@property (retain, nonatomic) NSString *flowIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;
@property (readonly, nonatomic) BOOL hasCreditAccountCredential;
@property (retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential;

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
