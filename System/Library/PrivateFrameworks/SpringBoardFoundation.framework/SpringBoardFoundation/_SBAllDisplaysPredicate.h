@interface _SBAllDisplaysPredicate : SBDisplayModePredicate

+ (id)sharedInstance;
+ (id)fromDefaultsKey:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;

@end
