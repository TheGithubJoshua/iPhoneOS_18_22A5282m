@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_providesConcreteBacking;
- (BOOL)_tryRetain;
- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;
- (unsigned long long)length;
- (const void *)bytes;

@end
