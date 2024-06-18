@interface VMUTaskMemoryCache : NSObject {
    unsigned char _taskType;
    unsigned int _taskPort;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
}

@property (readonly, nonatomic) struct mapped_memory_t { } *memoryRegions;
@property (copy, nonatomic) id /* block */ regionInfoBlock;

+ (id)taskMemoryCacheForTask:(unsigned int)a0;
+ (BOOL)taskIs64Bit:(unsigned int)a0;

- (id)initWithTask:(unsigned int)a0;
- (int)peekAtAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnsBuf:(void **)a2;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 to:(void *)a1;
- (BOOL)taskIsTranslated;
- (int)readPointerAt:(unsigned long long)a0 value:(unsigned long long *)a1;
- (void)enumerateMemoryCache:(id /* block */)a0;
- (id)initWithCoreFile:(id)a0;
- (int)stopPeeking;
- (void).cxx_destruct;
- (int)startPeeking;
- (int)unmapAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)flushMemoryCache;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnedAddress:(unsigned long long *)a2 returnedSize:(unsigned long long *)a3;
- (void)dealloc;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (const struct mapped_region_node_t { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)findMappedAddress:(unsigned long long)a0 size:(unsigned long long)a1;

@end
