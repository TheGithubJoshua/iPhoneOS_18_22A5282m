@class NSMorphology;

@interface NSInflectionRuleExplicit : NSInflectionRule

@property (readonly, copy) NSMorphology *morphology;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithMorphology:(id)a0;

@end
