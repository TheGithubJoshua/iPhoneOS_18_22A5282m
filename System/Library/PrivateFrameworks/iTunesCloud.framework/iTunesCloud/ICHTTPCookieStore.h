@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (id)init;
- (id)getCookieWithName:(id)a0 userIdentifier:(id)a1;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForUserIdentifier:(id)a0;
- (void)removeCookiesWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForURL:(id)a0;
- (id)_accountForUserIdentifier:(id)a0;
- (void)dealloc;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (void)removeAllCookies;
- (void)saveCookies:(id)a0 forURL:(id)a1;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (void)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (void)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (void)_saveCookies:(id)a0 userIdentifier:(id)a1;

@end
