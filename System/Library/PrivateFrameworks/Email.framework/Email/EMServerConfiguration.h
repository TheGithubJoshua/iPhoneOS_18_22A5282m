@interface EMServerConfiguration : NSObject

+ (id)getValueForKey:(id)a0;
+ (BOOL)refresh;
+ (id)_userDefaultsKey;
+ (void)_assertNotMainThread;
+ (double)_cacheValidityInterval;
+ (id)_configurationLocation;
+ (void)_savePropertyList:(id)a0;
+ (BOOL)isCacheRecent;
+ (void)refreshAsync;

@end
