@protocol PDSCDCache, PDSEntryStoreDelegate;

@interface PDSEntryStore : NSObject

@property (retain, nonatomic) id<PDSCDCache> cache;
@property (weak, nonatomic) id<PDSEntryStoreDelegate> delegate;

- (BOOL)hasPendingEntries;
- (id)activeUsersWithClientID:(id)a0;
- (BOOL)deleteEntriesForUser:(id)a0 withState:(unsigned char)a1 withError:(id *)a2;
- (BOOL)storeEntry:(id)a0 withError:(id *)a1;
- (id)usersWithClientID:(id)a0;
- (BOOL)deleteEntry:(id)a0 withError:(id *)a1;
- (id)entries;
- (BOOL)updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (id)users;
- (id)entriesForUser:(id)a0 withClientID:(id)a1;
- (BOOL)updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (id)entriesForUser:(id)a0;
- (void).cxx_destruct;
- (id)entriesWithClientID:(id)a0;
- (id)activeUsers;
- (id)initWithCache:(id)a0;
- (BOOL)_permitTransitionFromState:(unsigned char)a0 toState:(unsigned char)a1;
- (BOOL)hasActiveEntries;
- (BOOL)storeEntries:(id)a0 deleteEntries:(id)a1 withError:(id *)a2;

@end
