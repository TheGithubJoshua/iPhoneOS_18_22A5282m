@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (id)init;
- (BOOL)removeBulletinForID:(id)a0;
- (void)_purgeOldestNodes;
- (id)_findNodeForBulletinID:(id)a0;
- (void).cxx_destruct;
- (void)_deleteNode:(id)a0;
- (BOOL)_isFeedRelevant:(unsigned long long)a0;
- (id)allBulletins;
- (void)insertBulletin:(id)a0 fromFeed:(unsigned long long)a1;
- (id)cachedBulletinForID:(id)a0;

@end
