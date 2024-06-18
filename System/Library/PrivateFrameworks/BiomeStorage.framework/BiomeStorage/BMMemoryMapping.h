@class BMSharedMemory;

@interface BMMemoryMapping : NSObject {
    int _protection;
    int _advice;
    BMSharedMemory *_sharedMemory;
    _Atomic unsigned long long _currentWriteOffset;
    void *_start;
    unsigned long long _size;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _pageAlignedSize;
    unsigned long long _offsetSpace;
}

@property (readonly) void *start;
@property (readonly) char *end;
@property (readonly) unsigned long long currentWriteOffset;
@property (readonly) unsigned long long used;
@property (readonly) unsigned long long freeSpace;
@property (readonly) unsigned long long size;
@property (readonly) long long offset;
@property (readonly, getter=isWritable) BOOL writable;

+ (id)new;

- (void *)currentPosition;
- (void)sync;
- (id)dataAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1 makeCopy:(BOOL)a2;
- (id)init;
- (void)writeBytes:(const void *)a0 toOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)mapWithFileHandle:(id)a0 fileSize:(unsigned long long)a1;
- (void)unmap;
- (id)initWithSize:(unsigned long long)a0 protection:(int)a1 advice:(int)a2 offset:(long long)a3;
- (unsigned char)atomicReadAtOffset:(unsigned long long)a0 value:(union { unsigned long long x0; double x1; } *)a1;
- (BOOL)atomicUpdateOffset:(unsigned long long)a0 withValue:(union { unsigned long long x0; double x1; })a1 shouldReplace:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)canAtomicallyAccessOffset:(unsigned long long)a0;
- (void)updateToMaxOfCurrentWriteOffsetAnd:(unsigned long long)a0;
- (BOOL)isValidReadFromOffset:(unsigned long long)a0 withLength:(unsigned long long)a1;
- (unsigned char)atomicWriteBytes:(unsigned long long)a0 toOffset:(unsigned long long)a1 expected:(unsigned long long *)a2;
- (void)dealloc;
- (BOOL)mapWithSharedMemory:(id)a0;

@end
