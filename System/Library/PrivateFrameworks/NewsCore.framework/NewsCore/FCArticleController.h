@protocol FCContentContext;

@interface FCArticleController : NSObject

@property (retain, nonatomic) id<FCContentContext> context;

- (id)init;
- (id)initWithContext:(id)a0;
- (id)headlinesFetchOperationForArticleIDs:(id)a0;
- (id)articleWithID:(id)a0;
- (id)articleWithHeadline:(id)a0;
- (id)articleWithID:(id)a0 forceArticleUpdate:(BOOL)a1 qualityOfService:(long long)a2 relativePriority:(long long)a3;
- (void).cxx_destruct;
- (id)articleWithID:(id)a0 relativePriority:(long long)a1;
- (id)headlinesFetchOperationForArticleIDs:(id)a0 ignoreCacheForArticleIDs:(id)a1;
- (id)articleWithID:(id)a0 qualityOfService:(long long)a1 relativePriority:(long long)a2;

@end
