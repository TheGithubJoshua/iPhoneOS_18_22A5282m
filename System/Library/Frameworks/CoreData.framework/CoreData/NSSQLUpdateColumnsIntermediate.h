@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (id)initWithProperties:(id)a0 values:(id)a1 inScope:(id)a2;
- (id)governingAliasForKeypathExpression:(id)a0;
- (BOOL)isUpdateColumnsScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
