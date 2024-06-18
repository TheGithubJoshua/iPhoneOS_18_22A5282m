@class NSString, _QLCacheThread, QLCacheFragHandler, NSMutableArray;

@interface QLCacheMMAPBlobDatabase : NSObject {
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    void *_vmFile;
    NSMutableArray *_reservedBuffers;
}

@property (weak) _QLCacheThread *cacheThread;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long size;
@property (readonly) float fragmentation;

- (id)cacheHolesOrderedByStart;
- (BOOL)isOpen;
- (void)validateReservedBufferWithBlobInfo:(id)a0;
- (id)copyBlobWithInfo:(id)a0;
- (id)checkConsistency:(id)a0;
- (BOOL)doesExist;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)save;
- (void)open;
- (BOOL)deleteBlobsWithArray:(id)a0;
- (BOOL)deleteBlobWithInfo:(id)a0;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (void)reset;
- (id)initWithPath:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (void)compactFragmentation;
- (void)discardReservedBufferWithBlobInfo:(id)a0;
- (void *)bufferPointedToByBlobInfo:(id)a0;
- (void)close;

@end
