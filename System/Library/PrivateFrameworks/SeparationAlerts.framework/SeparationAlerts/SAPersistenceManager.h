@class SAPersistenceManagerSettings, SAPersistenceStore, NSHashTable;

@interface SAPersistenceManager : NSObject

@property (retain) SAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) SAPersistenceStore *store;

- (BOOL)load;
- (id)initWithSettings:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)save;
- (BOOL)_createDirectoryIfNotPresent;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (void)onUpdatedMonitoringSessionRecord:(id)a0;
- (BOOL)reset;
- (void)addObserver:(id)a0;

@end
