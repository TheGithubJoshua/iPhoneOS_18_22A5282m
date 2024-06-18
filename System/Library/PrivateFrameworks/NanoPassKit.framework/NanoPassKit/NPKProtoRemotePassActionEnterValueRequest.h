@class NSString, NSData;

@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *requestUniqueID;
@property (retain, nonatomic) NSString *balanceIdentifier;
@property (retain, nonatomic) NSString *balanceLabel;
@property (retain, nonatomic) NSString *currentBalanceCurrency;
@property (nonatomic) long long currentBalanceAmount;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData;

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
