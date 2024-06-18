@class NSString, NSArray, NSDictionary, ML3DatabaseDistantConnection;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {
    NSArray *_cachedRows;
    NSDictionary *_cachedColumnNameIndexMap;
}

@property (readonly, nonatomic) ML3DatabaseDistantConnection *distantConnection;
@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) NSArray *parameters;

- (id)initWithStatement:(id)a0;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)init;
- (BOOL)_fetchRowsIfEmpty;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)columnNameIndexMap;
- (id)description;
- (id)initWithDistantConnection:(id)a0 sql:(id)a1 parameters:(id)a2;
- (void)_localEnumerateRowsWithBlock:(id /* block */)a0;
- (void)_remoteEnumerateRowsWithBlock:(id /* block */)a0;

@end
