@interface VSCacheDeleteService : NSObject

+ (id)sharedService;

- (id)periodic:(id)a0 urgency:(int)a1;
- (id)purgeImpl:(id)a0 urgency:(int)a1;
- (BOOL)registerCacheDelete;
- (long long)totalSizeOfAssets:(id)a0;
- (id)purgeable:(id)a0 urgency:(int)a1;
- (id)purge:(id)a0 urgency:(int)a1;
- (id)purgeableAssetsWithInfo:(id)a0 urgency:(int)a1;

@end
