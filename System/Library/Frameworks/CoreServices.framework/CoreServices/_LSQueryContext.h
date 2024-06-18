@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject {
    id _resolver;
}

@property (class, nonatomic) BOOL simulateLimitedMappingForXCTests;

@property (readonly) id<_LSQueryResolving> _resolver;

+ (id)defaultContext;

- (void)clearCaches;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (id)debugDescription;
- (void)enumerateResolvedResultsOfQuery:(id)a0 withBlock:(id /* block */)a1;
- (id)resolveQueries:(id)a0 error:(id *)a1;
- (id)_resolver;

@end
