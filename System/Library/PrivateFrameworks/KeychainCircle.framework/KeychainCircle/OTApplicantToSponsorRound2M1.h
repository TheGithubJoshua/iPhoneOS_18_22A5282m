@class NSString, NSData;

@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasPermanentInfo;
@property (retain, nonatomic) NSData *permanentInfo;
@property (readonly, nonatomic) BOOL hasPermanentInfoSig;
@property (retain, nonatomic) NSData *permanentInfoSig;
@property (readonly, nonatomic) BOOL hasStableInfo;
@property (retain, nonatomic) NSData *stableInfo;
@property (readonly, nonatomic) BOOL hasStableInfoSig;
@property (retain, nonatomic) NSData *stableInfoSig;

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
