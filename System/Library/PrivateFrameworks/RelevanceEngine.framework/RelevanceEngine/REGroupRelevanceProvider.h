@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *groupIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)dictionaryEncoding;

@end
