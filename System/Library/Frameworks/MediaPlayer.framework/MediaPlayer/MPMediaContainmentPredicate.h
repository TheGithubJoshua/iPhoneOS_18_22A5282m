@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate

@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)ML3PredicateForContainer;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)ML3PredicateForTrack;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_ML3PredicateForEntityClass:(Class)a0;

@end
