@class NSArray;

@interface _CROrConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSubpredicates:(id)a0;

@end
