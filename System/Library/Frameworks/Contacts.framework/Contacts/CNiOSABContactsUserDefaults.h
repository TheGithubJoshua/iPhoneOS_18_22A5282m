@class NSCache, NSMutableDictionary, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (void)setDisplayNameOrder:(long long)a0;
- (void)flushCache;
- (long long)sortOrder;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)filteredGroupAndContainerIDs;
- (id)init;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (long long)shortNameFormat;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormat:(long long)a0;
- (id)initWithABWrapper:(id)a0;
- (void)_unregisterObserverForKey:(id)a0;
- (id)countryCode;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void)_registerObserverForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (long long)lastIgnoredNewDuplicatesCount;
- (void)dealloc;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)newContactDisplayNameOrder;
- (long long)displayNameOrder;

@end
