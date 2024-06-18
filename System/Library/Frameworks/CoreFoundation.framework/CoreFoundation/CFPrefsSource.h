@class __CFPrefsWeakObservers, _CFXPreferences;

@interface CFPrefsSource : NSObject {
    _CFXPreferences *_containingPreferences;
    struct __CFDictionary { } *_dict;
    __CFPrefsWeakObservers *_observers;
    _Atomic long long _generationCount;
    _Atomic _Atomic unsigned int *shmemEntry;
    _Atomic unsigned int lastKnownShmemState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isSearchList;
}

- (BOOL)managed;
- (BOOL)isByHost;
- (struct __CFString { } *)domainIdentifier;
- (void)alreadylocked_clearCache;
- (struct __CFString { } *)userIdentifier;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (struct __CFString { } *)container;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (BOOL)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (BOOL)servedByUserSessionDaemon;
- (void)unlock;
- (BOOL)isDirectModeEnabled;
- (id)description;
- (BOOL)isVolatile;
- (void)setFileProtectionClass:(int)a0;
- (void)setStoreName:(struct __CFString { } *)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (void)setAccessRestricted:(BOOL)a0;
- (void)lock;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (void)setEnabled:(BOOL)a0;
- (int)alreadylocked_updateObservingRemoteChanges;
- (void)dealloc;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void)setBackupDisabled:(BOOL)a0;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (struct __CFString { } *)copyOSLogDescription;
- (long long)alreadylocked_generationCount;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (long long)generationCount;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (id)initWithContainingPreferences:(id)a0;
- (void)setConfigurationPath:(struct __CFString { } *)a0;

@end
