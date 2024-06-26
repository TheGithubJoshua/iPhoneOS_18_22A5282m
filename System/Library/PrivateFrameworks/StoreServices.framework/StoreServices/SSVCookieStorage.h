@class SSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SSVCookieStorage : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSURL *_storageLocation;
    BOOL _usesSharedCookieDatabase;
}

@property (readonly, nonatomic) SSSQLiteDatabase *_database;
@property (nonatomic) BOOL performingMigration;
@property (readonly) NSURL *storageLocation;

+ (BOOL)_bindStatement:(struct sqlite3_stmt { } *)a0 withValues:(id)a1;
+ (id)_getUserSetCookiesForResponse:(id)a0;
+ (id)sharedInstance;
+ (BOOL)_migrateToVersion2WithDatabase:(id)a0;
+ (BOOL)responseHasSetCookies:(id)a0;
+ (id)_rescuedStorageLocationForLocation:(id)a0;
+ (BOOL)_fileURLRepresentsSharedStorageLocation:(id)a0;
+ (BOOL)_fileIsOwnedByRoot:(id)a0;
+ (id)sharedStorage;
+ (id)_getGlobalSetCookiesForResponse:(id)a0;
+ (BOOL)_migrateToVersion1WithDatabase:(id)a0;
+ (id)_sharedStorageLocationPath;
+ (BOOL)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)a0;
+ (id)_getSetCookiesForResponse:(id)a0;
+ (BOOL)_currentProcessIsRoot;
+ (BOOL)_setupCookieDatabase:(id)a0 forCookieStorage:(id)a1;

- (id)_filterCookies:(id)a0 forURL:(id)a1;
- (id)init;
- (void)removeCookiesWithAccount:(id)a0;
- (id)allCookiesForUserIdentifier:(id)a0 scope:(long long)a1;
- (BOOL)_stopIncludingLocalCookies;
- (void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
- (id)_allCookieKeys;
- (id)cookieArrayBySettingFeatureEnablerWithArray:(id)a0 key:(id)a1;
- (void)_insertCookies:(id)a0 forKey:(id)a1;
- (id)cookieHeadersForURL:(id)a0 account:(id)a1;
- (id)fetchDefaults;
- (void)synchronizeCookies;
- (void)removeCookiesWithUserIdentifier:(id)a0;
- (id)cookiesForURL:(id)a0 userIdentifier:(id)a1;
- (id)_columnNameForCookieProperty:(id)a0;
- (void)setCookiesFromCookieStorage:(id)a0;
- (void)setCookiesForHTTPResponse:(id)a0 account:(id)a1;
- (id)_accountForKey:(id)a0;
- (id)_copyCookieDictionaryForURL:(id)a0 key:(id)a1;
- (void)setFeatureEnablerInDictionary:(id)a0 key:(id)a1;
- (id)_copyPrivateCookieObjectsForURL:(id)a0 key:(id)a1;
- (void)setCookiesForHTTPResponse:(id)a0 userIdentifier:(id)a1 scope:(long long)a2;
- (BOOL)_shouldAddITFECookieToURL:(id)a0;
- (void)removeCookiesWithProperties:(id)a0;
- (void).cxx_destruct;
- (void)_bindInsertStatement:(struct sqlite3_stmt { } *)a0 forCookie:(id)a1 key:(id)a2;
- (id)allCookiesForUserIdentifier:(id)a0;
- (id)_copyCookiesForPreparedSQLStatement:(struct sqlite3_stmt { } *)a0;
- (id)cookiesForURL:(id)a0 userIdentifier:(id)a1 scope:(long long)a2;
- (void)setCookiesForHTTPResponse:(id)a0 userIdentifier:(id)a1;
- (id)cookieHeadersForURL:(id)a0 userIdentifier:(id)a1 scope:(long long)a2;
- (void)synchronizeFeatureEnablerCookieWithCookieValue:(id)a0 key:(id)a1 result:(id /* block */)a2;
- (id)cookiesForURL:(id)a0 account:(id)a1;
- (id)allCookiesForAccount:(id)a0;
- (void)_cookieDatabaseDidChange;
- (id)_copyPrivateCookiesForURL:(id)a0 key:(id)a1;
- (void)dealloc;
- (void)setCookies:(id)a0 forAccount:(id)a1;
- (void)removeAllCookies;
- (void)setCookies:(id)a0 forUserIdentifier:(id)a1;
- (void)removeCookiesWithUserIdentifier:(id)a0 scope:(long long)a1;
- (id)_copyCookieObjectsForURL:(id)a0 key:(id)a1;
- (id)initWithStorageLocation:(id)a0;
- (id)_copyCookiesWithKey:(id)a0;
- (id)cookieHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (void)_setCookies:(id)a0 forKey:(id)a1;

@end
