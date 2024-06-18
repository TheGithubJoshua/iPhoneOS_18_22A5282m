@interface ARKitUserDefaults : NSObject

+ (BOOL)shouldUseCache;
+ (id)listForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)removeCachedObjectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)clearUserDefaultsCache;
+ (id)stringForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (void)synchronize;
+ (id)objectForKey:(id)a0 useCache:(BOOL)a1;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0;
+ (id)valueForKey:(id)a0;
+ (id)resolutionDictionaryForKey:(id)a0;
+ (void)cacheObject:(id)a0 forKey:(id)a1;
+ (void)removeObjectForKey:(id)a0;
+ (id)cachedObjectForKey:(id)a0;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (BOOL)boolForKey:(id)a0;
+ (id)defaultValues;
+ (id)userDefaultsCache;
+ (double)doubleForKey:(id)a0;
+ (id)objectForKeySlow:(id)a0;
+ (void)removeAllKeys;

@end
