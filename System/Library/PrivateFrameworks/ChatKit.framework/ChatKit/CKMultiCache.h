@interface CKMultiCache : IMMultiDict

@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL cacheEligibleForPrewarm;

- (id)init;
- (void)removeAllObjects;
- (void)dealloc;
- (void)markCacheAsPrewarmed;
- (void)pushObject:(id)a0 forKey:(id)a1;

@end
