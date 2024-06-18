@class TAPersistenceManagerSettings, TAPersistenceStore, NSHashTable;

@interface TAPersistenceManager : NSObject

@property (retain) TAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TAPersistenceStore *store;

- (BOOL)load;
- (id)initWithSettings:(id)a0;
- (void)removeObserver:(id)a0;
- (void)onUpdatedTAStore:(id)a0;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)save;
- (BOOL)_createDirectoryIfNotPresent;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (BOOL)reset;
- (void)addObserver:(id)a0;

@end
