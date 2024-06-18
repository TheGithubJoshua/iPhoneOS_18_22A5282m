@interface NSConcreteData : NSData {
    unsigned long long _length;
    void *_bytes;
    id /* block */ _deallocator;
}

- (BOOL)_providesConcreteBacking;
- (id)_createDispatchData;
- (BOOL)_copyWillRetain;
- (id)init;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_isCompact;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 freeWhenDone:(BOOL)a3 bytesAreVM:(BOOL)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (void)getBytes:(void *)a0;
- (const void *)bytes;

@end
