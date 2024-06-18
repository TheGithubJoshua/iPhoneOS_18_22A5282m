@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_isCompact;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)length;
- (id)_dispatchData;
- (const void *)bytes;

@end
