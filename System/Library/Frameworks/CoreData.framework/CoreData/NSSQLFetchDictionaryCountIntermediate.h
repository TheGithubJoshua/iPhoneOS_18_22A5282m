@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}

- (void)dealloc;
- (id)initWithFetchIntermediate:(id)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;

@end
