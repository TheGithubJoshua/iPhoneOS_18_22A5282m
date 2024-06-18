@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (id)init;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (unsigned long long)cachedCount;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void).cxx_destruct;
- (void)cleanUpAddressBookCache_sync;
- (id)description;
- (void)revertAddressBook:(id)a0;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)dealloc;
- (void)registerForContactsNotifications;

@end
