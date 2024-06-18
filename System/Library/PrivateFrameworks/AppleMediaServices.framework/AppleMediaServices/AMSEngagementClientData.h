@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly, nonatomic) NSURL *clientDataURL;

@property (retain, nonatomic) NSMutableDictionary *apps;
@property (retain, nonatomic) NSString *lastSyncedBuild;

+ (id)_fetchClientData;
+ (id)loadFromDisk;
+ (id)_sharedQueue;
+ (void)_registerNotifications;
+ (BOOL)_isDaemon;
+ (void)erase;
+ (void)_assertEngagementd;

- (id)initWithCacheObject:(id)a0;
- (void)saveToDisk;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (id)destinationsForEvent:(id)a0;
- (id)cachedResponseDataForEvent:(id)a0;
- (void)_cleanUpApps;

@end
