@class NSString, BMCache;
@protocol BMFileManagerDelegate;

@interface BMFileManager : NSObject <BMFileManagerImpl> {
    long long _cachingOptions;
    BMCache *_fileHandleCache;
    BMCache *_memoryMappingCache;
}

@property (readonly, nonatomic) NSString *directory;
@property (weak, nonatomic) id<BMFileManagerDelegate> delegate;

+ (id)globalWeakFileHandleCache;
+ (id)globalWeakMemoryMappingCache;
+ (id)fileManagerWithMediatedAccessToDirectory:(id)a0;
+ (id)direct;
+ (id)fileManagerWithDirectAccessToDirectory:(id)a0 cachingOptions:(long long)a1 extraFlags:(int)a2 protection:(int)a3;

- (id)init;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)memoryMappingForFileAtPath:(id)a0 flags:(int)a1 error:(id *)a2;
- (id)dataWithContentsOfFileAtPath:(id)a0 error:(id *)a1;
- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;
- (id)_memoryMappingForFileAtPath:(id)a0 flags:(int)a1 error:(id *)a2;
- (id)_memoryMappingFromFileHandle:(id)a0 flags:(int)a1 error:(id *)a2;
- (id)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)replaceFileAtPath:(id)a0 withData:(id)a1 error:(id *)a2;
- (BOOL)removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)acquireLockfile:(id)a0 andRunBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 error:(id *)a2;
- (BOOL)removeFileAtPath:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;
- (unsigned long long)sizeOfFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;

@end
