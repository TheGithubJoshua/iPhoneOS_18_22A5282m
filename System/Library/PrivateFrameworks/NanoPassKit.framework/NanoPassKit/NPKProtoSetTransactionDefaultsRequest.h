@class NSData;

@interface NPKProtoSetTransactionDefaultsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasDefaultShippingAddress;
@property (retain, nonatomic) NSData *defaultShippingAddress;
@property (readonly, nonatomic) BOOL hasDefaultBillingAddresses;
@property (retain, nonatomic) NSData *defaultBillingAddresses;
@property (readonly, nonatomic) BOOL hasDefaultContactEmail;
@property (retain, nonatomic) NSData *defaultContactEmail;
@property (readonly, nonatomic) BOOL hasDefaultContactPhone;
@property (retain, nonatomic) NSData *defaultContactPhone;
@property (readonly, nonatomic) BOOL hasDefaultContactName;
@property (retain, nonatomic) NSData *defaultContactName;

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
