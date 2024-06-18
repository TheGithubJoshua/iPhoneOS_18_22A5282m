@class CSSuggestion;

@interface EMQuery : EFQuery

@property (copy, nonatomic) CSSuggestion *suggestion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 suggestion:(id)a3 limit:(long long)a4 queryOptions:(unsigned long long)a5 label:(id)a6;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToQuery:(id)a0;
- (id)debugDescription;

@end
