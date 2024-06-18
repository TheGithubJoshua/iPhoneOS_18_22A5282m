@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (long long)maximumKeyCount;
- (void)updateConfiguration;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (void)unregisterForSynchronizedDefaults;
- (void)ping;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (void)scheduleRemoteSynchronization;
- (long long)maximumDataLengthPerKey;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)synchronize;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)registerForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (struct __CFDictionary { } *)copyDictionary;
- (void)setDefaultsConfiguration:(id)a0;
- (unsigned char)hasExternalChanges;
- (void)dealloc;
- (long long)maximumKeyLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (long long)maximumTotalDataLength;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;

@end
