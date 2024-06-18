@class NSArray, NSString;

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {
    NSArray *_idSets;
    NSString *_columnName;
}

- (void)executeEpilogue;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2 idSets:(id)a3 columnName:(id)a4;
- (void)dealloc;

@end
