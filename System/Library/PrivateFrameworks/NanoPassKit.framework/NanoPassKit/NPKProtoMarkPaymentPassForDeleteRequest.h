@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;

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
- (void)addPaymentApplicationAIDs:(id)a0;
- (void)clearPaymentApplicationAIDs;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentApplicationAIDsCount;

@end
