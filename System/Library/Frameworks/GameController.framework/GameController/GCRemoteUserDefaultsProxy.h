@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, GCUserDefaultsXPCProxyServiceRemoteClientInterface;

@interface GCRemoteUserDefaultsProxy : NSObject <GCUserDefaults> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_clients;
}

@property (readonly, nonatomic) BOOL agentConnectionEstablished;
@property (retain, nonatomic) id<GCUserDefaultsXPCProxyServiceRemoteClientInterface> activeClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)consoleUserDidChange:(id)a0;
- (void)observeUserDefaultsValueForKeyPath:(id)a0 change:(id)a1;
- (void)postInitialKVONotificationForObservation:(id)a0 keyPath:(id)a1;
- (void)refreshActiveClient;
- (void)userDefaultsCheckIn:(id)a0 effectiveUserIdentifier:(unsigned int)a1;

@end
