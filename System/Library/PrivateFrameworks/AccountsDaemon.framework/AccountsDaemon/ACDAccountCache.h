@class NSMutableDictionary;

@interface ACDAccountCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expirersLock;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSMutableDictionary *cachedAccountsByID;
@property (retain) NSMutableDictionary *cachedAccountIDsByType;
@property (retain) NSMutableDictionary *cachedAccountTypesByID;
@property (retain) NSMutableDictionary *expirersByID;

- (void)clearCache;
- (void)_resetParentAccountForCachedAccountIfNeeded:(id)a0;
- (void)cacheAccount:(id)a0;
- (id)_expirerIdentifierForAccountTypeID:(id)a0;
- (id)initWithValidityDuration:(unsigned int)a0;
- (void)cacheAccounts:(id)a0 forType:(id)a1 justActive:(BOOL)a2;
- (id)cachedAccountTypeForID:(id)a0;
- (id)cachedAccountForIdentifier:(id)a0;
- (id)_keyForType:(id)a0 justActive:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeAccountType:(id)a0;
- (id)cachedAccountsOfType:(id)a0 justActive:(BOOL)a1;
- (void)cacheAccountType:(id)a0;
- (void)_lock_removeAccountsForType:(id)a0;
- (void)removeAccount:(id)a0;

@end
