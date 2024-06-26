@interface REForcedRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) float relevance;
@property (readonly, nonatomic) BOOL isHistoric;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithForcedRelevance:(float)a0;
- (id)initWithForcedRelevance:(float)a0 isHistoric:(BOOL)a1;

@end
