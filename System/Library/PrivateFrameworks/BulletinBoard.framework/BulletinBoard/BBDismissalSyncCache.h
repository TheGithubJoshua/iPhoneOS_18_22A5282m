@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSDate *timeToCheck;

- (id)init;
- (void)_checkCache;
- (void)removeBulletinMatch:(id)a0;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 inSection:(id)a2 forFeeds:(unsigned long long)a3;
- (BOOL)_isTimeToCheck;
- (void).cxx_destruct;
- (id)description;
- (id)findBulletinMatch:(id)a0;

@end
