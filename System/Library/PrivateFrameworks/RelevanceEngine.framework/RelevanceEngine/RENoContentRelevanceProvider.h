@interface RENoContentRelevanceProvider : RERelevanceProvider

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;

@end
