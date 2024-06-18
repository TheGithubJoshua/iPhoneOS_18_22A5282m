@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_copyWillRetain;
- (id)init;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_isCompact;
- (BOOL)_tryRetain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)copy;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)length;
- (const void *)bytes;

@end
