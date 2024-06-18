@class NSString, NSData;

@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasBalanceBytes;
@property (retain, nonatomic) NSData *balanceBytes;
@property (readonly, nonatomic) BOOL hasBalanceReminderBytes;
@property (retain, nonatomic) NSData *balanceReminderBytes;

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
