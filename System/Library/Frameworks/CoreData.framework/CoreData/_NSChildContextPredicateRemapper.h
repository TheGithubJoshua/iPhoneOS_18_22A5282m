@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

- (void)visitPredicate:(id)a0;
- (id)init;
- (id)initWithContext:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)dealloc;

@end
