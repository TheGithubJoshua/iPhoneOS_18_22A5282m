@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; } *_reserved;
    int _accessCount;
}

- (void)discardContentIfPossible;
- (id)init;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)description;
- (void)_destroyMemory;
- (BOOL)beginContentAccess;
- (void)endContentAccess;
- (void)dealloc;
- (BOOL)isContentDiscarded;
- (unsigned long long)length;
- (const void *)bytes;

@end
