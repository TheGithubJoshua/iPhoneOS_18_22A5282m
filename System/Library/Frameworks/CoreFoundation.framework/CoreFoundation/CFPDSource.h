@class CFPDDataBuffer, CFPrefsDaemon, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface CFPDSource : NSObject {
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString { } *_userName;
    struct __CFString { } *_domain;
    char *_actualPath;
    char *_fileName;
    struct __CFSet { } *_observingConnections;
    NSObject<OS_os_transaction> *_dirtyTransaction;
    struct __CFString { } *_uncanonicalizedPathCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uncanonicalizedPathCacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observingConnectionsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _plistFileOwner;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _fileProtectionClass;
    int _parentFD;
    int _cachedPlistFD;
    short _generationShmemIndex;
    BOOL _byHost;
    BOOL _managed;
    BOOL _managedUsesContainer;
    BOOL _watchingParentDirectory;
    unsigned char _handlingRequest : 1;
    unsigned char _dirty : 1;
    unsigned char _neverCache : 1;
    unsigned char _checkedForNonPrefsPlist : 1;
    unsigned char _restrictedReadability : 1;
    unsigned char _waitingForDeviceUnlock : 1;
    unsigned char _disableBackup : 1;
    unsigned char _plistFileOwnerReadable : 1;
    unsigned char _plistFileWorldReadable : 1;
    unsigned char _actualPathRedirectedByTerminalSymlink : 1;
}

- (BOOL)managed;
- (id)acceptMessage:(id)a0;
- (void)setDirty:(BOOL)a0;
- (void)asyncNotifyObserversOfWriteFromConnection:(id)a0 message:(id)a1;
- (void)observingConnectionWasInvalidated:(id)a0;
- (void)drainPendingChanges;
- (struct __CFString { } *)user;
- (BOOL)enqueueNewKey:(id)a0 value:(id)a1 encoding:(int)a2 inBatch:(BOOL)a3 fromMessage:(id)a4;
- (void)updateShmemEntry;
- (void)lockedSync:(id /* block */)a0;
- (void)syncWriteToDisk;
- (void)setManagedPreferencesUseContainer:(BOOL)a0;
- (struct __CFString { } *)container;
- (struct __CFString { } *)copyUncanonicalizedPath;
- (struct __CFString { } *)cloudConfigurationPath;
- (struct __CFString { } *)domain;
- (void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString { } *)a0;
- (void)setUncanonicalizedPathCached:(BOOL)a0;
- (struct __CFString { } *)debugDump;
- (void)respondToFileWrittenToBehindOurBack;
- (unsigned long long)hash;
- (id)copyPropertyListValidatingPlist:(BOOL)a0;
- (void)unlock;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)a0 andReturnFileUID:(unsigned int *)a1 andMode:(unsigned short *)a2;
- (void)cacheFileInfo;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)cacheFileInfoForWriting:(BOOL)a0 euid:(unsigned int)a1 egid:(unsigned int)a2 didCreate:(BOOL *)a3;
- (void)clearCacheForReason:(struct __CFString { } *)a0;
- (void)lock;
- (void)handleWritingResult:(struct __CFDictionary { } *)a0;
- (void)cleanUpAfterAcceptingMessage:(id)a0;
- (void)dealloc;
- (int)validateMessage:(id)a0 withNewKey:(id)a1 newValue:(id)a2 plistIsAvailableToRead:(BOOL)a3 containerPath:(const char *)a4 fileUID:(unsigned int)a5 mode:(unsigned short)a6 diagnosticMessage:(const char **)a7;
- (short)shmemIndex;
- (id /* block */)createDiskWrite;
- (void)finishedNonRequestWriteWithResult:(struct __CFDictionary { } *)a0;
- (void)processEndOfMessageIntendingToRemoveSource:(BOOL *)a0;
- (void)lockedAsync:(id /* block */)a0;
- (id)initWithDomain:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 byHost:(BOOL)a2 managed:(BOOL)a3 shmemIndex:(short)a4 daemon:(id)a5;
- (BOOL)byHost;

@end