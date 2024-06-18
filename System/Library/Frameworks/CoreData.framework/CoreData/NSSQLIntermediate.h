@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)fetchIntermediate;
- (BOOL)isUpdateScoped;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)governingAlias;
- (BOOL)isWhereScoped;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)_lastScopedItem;
- (BOOL)isUpdateColumnsScoped;
- (BOOL)isFunctionScoped;
- (id)governingEntity;
- (BOOL)isTargetColumnsScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isOrScoped;
- (id)initWithScope:(id)a0;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
