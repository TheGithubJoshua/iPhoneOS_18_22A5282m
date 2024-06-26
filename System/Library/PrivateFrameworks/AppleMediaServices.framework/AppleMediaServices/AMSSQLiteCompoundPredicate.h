@class NSArray, NSString;

@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate <NSCopying> {
    NSString *_combinationOperation;
}

@property (readonly, nonatomic) NSArray *predicates;

+ (id)predicateWithProperty:(id)a0 values:(id)a1 comparisonType:(long long)a2;
+ (id)predicateMatchingAllPredicates:(id)a0;
+ (id)predicateMatchingAnyPredicates:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
