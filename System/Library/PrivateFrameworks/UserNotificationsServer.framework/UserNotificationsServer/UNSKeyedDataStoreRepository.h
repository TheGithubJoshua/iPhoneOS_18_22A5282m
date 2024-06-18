@class NSString, UNSBundleLibrarian;
@protocol UNSContentProtectionStrategy;

@interface UNSKeyedDataStoreRepository : NSObject {
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    UNSBundleLibrarian *_librarian;
    id<UNSContentProtectionStrategy> _protectionStrategy;
    NSString *_objectIdentifierKey;
    long long _maxObjectsPerKey;
}

- (id)_dataAtPath:(id)a0;
- (id)directoryPath;
- (id)_pathForKey:(id)a0;
- (BOOL)_isReplacementSupported;
- (id)replaceObject:(id)a0 forKey:(id)a1;
- (id)_objectsAtPath:(id)a0;
- (id)addObject:(id)a0 mustReplace:(BOOL)a1 forKey:(id)a2;
- (id)allKeys;
- (void)_removeItemAtPath:(id)a0;
- (void)setObjects:(id)a0 forKey:(id)a1;
- (id)_addObject:(id)a0 mustReplace:(BOOL)a1 atPath:(id)a2;
- (void)removeDataStoreRepository;
- (id)addObject:(id)a0 forKey:(id)a1;
- (void)migrateStoreAtPath:(id)a0 forKey:(id)a1;
- (BOOL)_useReplacementToImport:(id)a0 into:(id)a1;
- (void)protectionStateChanged;
- (BOOL)_saveObjects:(id)a0 atPath:(id)a1;
- (id)_removeObjectsPassingTest:(id /* block */)a0 atPath:(id)a1;
- (void).cxx_destruct;
- (id)removeObjectsPassingTest:(id /* block */)a0 forKey:(id)a1;
- (id)objectsPassingTest:(id /* block */)a0 forKey:(id)a1;
- (void)removeStoreForKey:(id)a0;
- (id)_directoryForKey:(id)a0;
- (id)_objectsForData:(id)a0 identifier:(id)a1;
- (void)removeAllObjectsForKey:(id)a0;
- (id)initWithDirectory:(id)a0 fileName:(id)a1 pathExtension:(id)a2 librarian:(id)a3 repositoryProtectionStrategy:(id)a4 objectIdentifierKey:(id)a5 maxObjectsPerKey:(long long)a6;
- (void)_setObjects:(id)a0 atPath:(id)a1;
- (id)objectsForKey:(id)a0;
- (id)_addObject:(id)a0 toObjects:(id)a1 mustReplace:(BOOL)a2 receipt:(id *)a3;
- (id)_objectsPassingTest:(id /* block */)a0 atPath:(id)a1;

@end
