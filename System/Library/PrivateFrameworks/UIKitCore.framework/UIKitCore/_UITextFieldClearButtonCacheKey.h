@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying> {
    int _variant;
    struct CGColor { } *_color;
}

- (id)initWithVariant:(int)a0 color:(struct CGColor { } *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
