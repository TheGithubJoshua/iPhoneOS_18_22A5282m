@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *emailAddresses;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)a0;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearEmailAddresses;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)emailAddressesCount;
- (void)addEmailAddresses:(id)a0;
- (id)vipSender;

@end
