@class NSPredicate, NSSet, NSMutableArray;

@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor> {
    NSSet *_keys;
    NSSet *_operators;
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) NSPredicate *predicate;

- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (BOOL)isSupportedExpression:(id)a0;
- (void)processCompoundPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 supportedKeys:(id)a1 supportedOperators:(id)a2;
- (void)processComparisonPredicate:(id)a0;

@end
