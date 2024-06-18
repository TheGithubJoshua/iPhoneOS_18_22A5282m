@class NSMapTable, _EDPersistenceDatabaseConnectionWrapper, NSMutableSet, NSLock, EFResourcePool;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject {
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
}

@property (weak, nonatomic) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) unsigned long long cacheSize;
@property (readonly, nonatomic) unsigned long long maxConcurrentBackgroundReaders;
@property (readonly, nonatomic) unsigned long long backgroundReadersWaiting;
@property (readonly, nonatomic) unsigned long long writersWaiting;

- (id)initWithDelegate:(id)a0 maxConcurrentBackgroundReaders:(unsigned long long)a1;
- (id)init;
- (void)flush;
- (unsigned long long)maxConcurrentReaders;
- (id)_connectionWithType:(unsigned long long)a0;
- (void)checkInConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lockForConnectionType:(unsigned long long)a0 resource:(id *)a1;
- (void)dealloc;
- (id)readerConnection;
- (void)_unlockForConnectionType:(unsigned long long)a0 resource:(id)a1;
- (id)backgroundReaderConnection;
- (id)writerConnection;

@end
