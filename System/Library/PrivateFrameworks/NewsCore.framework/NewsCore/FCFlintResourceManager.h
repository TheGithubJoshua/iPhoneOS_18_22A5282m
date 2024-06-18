@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject {
    id<FCContentContext> _context;
}

- (id)init;
- (id)initWithContext:(id)a0;
- (id)cachedResourceWithIdentifier:(id)a0;
- (id)fetchResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)cachedResourcesWithIdentifiers:(id)a0;
- (id)fetchFontResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
