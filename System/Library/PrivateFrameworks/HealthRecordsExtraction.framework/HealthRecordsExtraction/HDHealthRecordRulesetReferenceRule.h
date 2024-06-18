@class NSString, NSSet;

@interface HDHealthRecordRulesetReferenceRule : NSObject

@property (readonly, nonatomic) long long appliesTo;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSSet *allowedResourceTypes;
@property (readonly, copy, nonatomic) NSSet *disallowedResourceTypes;

+ (id)referenceRulesetsForRules:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithKeyPath:(id)a0 allowedTypes:(id)a1 disallowedTypes:(id)a2;

@end
