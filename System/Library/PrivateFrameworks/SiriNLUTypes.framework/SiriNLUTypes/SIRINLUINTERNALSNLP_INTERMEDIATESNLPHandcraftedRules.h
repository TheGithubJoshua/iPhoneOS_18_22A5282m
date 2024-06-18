@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

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
- (id)ruleIdsAtIndex:(unsigned long long)a0;
- (void)addRuleIds:(id)a0;
- (void)clearRuleIds;
- (unsigned long long)ruleIdsCount;

@end
