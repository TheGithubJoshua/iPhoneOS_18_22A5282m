@interface REPriorityRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) float priority;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPriority:(float)a0;
- (id)dictionaryEncoding;

@end
