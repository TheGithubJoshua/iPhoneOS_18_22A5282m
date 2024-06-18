@class _GKASKResourceCacheGroup, NSCache;

@interface GKResourceCache : NSObject

@property (readonly, nonatomic) _GKASKResourceCacheGroup *group;
@property (readonly, nonatomic) NSCache *contents;
@property (readonly, nonatomic) BOOL isGroupMember;
@property (nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground;
@property (nonatomic) unsigned long long limit;

- (id)init;
- (void)addResource:(id)a0 forKey:(id)a1;
- (id)initWithGroupOfCache:(id)a0;
- (void)removeAllResources;
- (void).cxx_destruct;
- (id)resourcesForKey:(id)a0;
- (void)dealloc;
- (void)replaceResourcesForKey:(id)a0 withResource:(id)a1;
- (void)removeResourcesForKey:(id)a0;

@end
