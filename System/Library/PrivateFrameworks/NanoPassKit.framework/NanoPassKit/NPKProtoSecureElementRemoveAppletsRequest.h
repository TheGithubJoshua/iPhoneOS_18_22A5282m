@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *cardAIDs;

+ (Class)cardAIDsType;

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
- (void)addCardAIDs:(id)a0;
- (id)cardAIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;

@end
