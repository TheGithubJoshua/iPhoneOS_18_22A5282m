@class NSPersistentContainer, NSURL, NSString;

@interface PDSCDCacheContainer : NSObject <PDSCDCache, PDSKVStore>

@property (weak, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSURL *containingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasPendingEntries;
- (BOOL)deleteEntriesForUser:(id)a0 withState:(unsigned char)a1 withError:(id *)a2;
- (BOOL)storeEntry:(id)a0 withError:(id *)a1;
- (id)stringForKey:(id)a0;
- (BOOL)deleteEntry:(id)a0 withError:(id *)a1;
- (id)loadAllEntries;
- (id)numberForKey:(id)a0;
- (BOOL)updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (id)loadAllEntriesUser:(id)a0 withClientID:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)deleteCache;
- (BOOL)updateEntryState:(unsigned char)a0 forUser:(id)a1 withError:(id *)a2;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (BOOL)_storeEntry:(id)a0 transitionBlock:(id /* block */)a1 context:(id)a2 withError:(id *)a3;
- (id)_usersForClientID:(id)a0 activeOnly:(BOOL)a1;
- (id)loadAllUsersForClientID:(id)a0;
- (id)loadAllActiveUsers;
- (void)setData:(id)a0 forKey:(id)a1;
- (id)allStoredValues;
- (id)_cdRegistrationsMatchingEntry:(id)a0 inContext:(id)a1;
- (BOOL)updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (void)_KVEntryForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)dataForKey:(id)a0;
- (id)_cdRegistrationsMatchingUser:(id)a0 withClientID:(id)a1 inContext:(id)a2;
- (id)loadAllActiveUsersForClientID:(id)a0;
- (id)_cdUsersMatchingUserID:(id)a0 userType:(short)a1 inContext:(id)a2;
- (id)loadWithError:(id *)a0;
- (BOOL)_deleteEntry:(id)a0 context:(id)a1 withError:(id *)a2;
- (BOOL)_updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (void).cxx_destruct;
- (id)loadAllEntriesUser:(id)a0;
- (id)_entriesFromRegistrations:(id)a0 inContext:(id)a1;
- (id)loadAllUsers;
- (id)_loadUsersIncludingOnlyActive:(BOOL)a0;
- (BOOL)storeEntry:(id)a0 transitionBlock:(id /* block */)a1 withError:(id *)a2;
- (void)_syncBlockWithContext:(id /* block */)a0;
- (BOOL)_updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (BOOL)hasActiveEntries;
- (id)initWithContainingPath:(id)a0;
- (id)loadPendingEntries;
- (id)loadAllEntriesForClientID:(id)a0;
- (BOOL)storeEntries:(id)a0 transitionBlock:(id /* block */)a1 deleteEntries:(id)a2 withError:(id *)a3;

@end
