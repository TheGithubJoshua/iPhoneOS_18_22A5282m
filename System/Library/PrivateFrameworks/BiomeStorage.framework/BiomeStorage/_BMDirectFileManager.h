@class NSString, BMFileHandle;

@interface _BMDirectFileManager : BMFileManager <BMFileManagerImpl> {
    NSString *_directory;
    int _extraFlags;
    int _protection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setUpLock;
    BMFileHandle *_directoryHandle;
}

- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;
- (id)_memoryMappingForFileAtPath:(id)a0 flags:(int)a1 error:(id *)a2;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1 extraFlags:(int)a2 protection:(int)a3;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)setUpWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 error:(id *)a2;
- (int)_openTemporaryDirectory;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;

@end
