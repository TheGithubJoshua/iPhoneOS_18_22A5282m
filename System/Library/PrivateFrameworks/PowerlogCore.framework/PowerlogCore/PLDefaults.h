@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (id)sharedDefaults;
+ (id)applicationID;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)eplEnabled;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (BOOL)isModelingDebugEnabled;
+ (int)liveModeQuery;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)debugEnabled;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)liteMode;
+ (BOOL)oldFullMode;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)fullModeForClass:(Class)a0;
+ (id)objectForKey:(id)a0;
+ (BOOL)taskMode;
+ (BOOL)isDevBoard;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (long long)mode;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (BOOL)isModelTrigger;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (BOOL)fullMode;
+ (void)enableRestartAtEPL;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)boolForKey:(id)a0;
+ (id)allDefaultsEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (double)doubleForKey:(id)a0;
+ (BOOL)fullPLLog;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;

- (id)init;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void).cxx_destruct;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
