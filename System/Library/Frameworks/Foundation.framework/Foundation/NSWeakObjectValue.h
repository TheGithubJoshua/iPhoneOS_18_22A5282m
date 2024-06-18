@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (id)weakObjectValue;
- (id)initWithObject:(id)a0;
- (BOOL)isEqualToValue:(id)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nonretainedObjectValue;
- (void)dealloc;

@end
