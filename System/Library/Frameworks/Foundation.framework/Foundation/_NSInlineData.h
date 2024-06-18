@interface _NSInlineData : NSData {
    unsigned short _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)a0;

- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)_createDispatchData;
- (BOOL)_isCompact;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (const void *)bytes;

@end
