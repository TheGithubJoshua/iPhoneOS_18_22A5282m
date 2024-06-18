@class PARSession;

@interface SPCacheManager : NSObject {
    PARSession *_session;
}

@property (class, readonly) SPCacheManager *defaultManager;

+ (id)defaults;
+ (void)removeKey:(id)a0;
+ (id)defaultProperties;
+ (void)setVersionWithValue:(long long)a0;
+ (id)defaultValueWithKey:(id)a0;
+ (void)removeDefaults;
+ (id)identifier;
+ (long long)version;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;

- (id)init;
- (void)cacheContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)cachePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)deleteSuggestion:(id)a0 type:(int)a1 score:(id)a2;
- (void)deleteLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3;
- (void)deletePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2;
- (void)enumerateRecentResultsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cacheResult:(id)a0 title:(id)a1 searchString:(id)a2;
- (void)deleteAllResults;
- (void)cacheLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
- (void)deleteResult:(id)a0 title:(id)a1;
- (void)cacheSuggestion:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
- (void)enumerateRecentCompletionsWithSearchString:(id)a0 usingBlock:(id /* block */)a1;
- (id)recentResultsWithOptions:(id)a0;
- (void)deleteContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2;

@end
