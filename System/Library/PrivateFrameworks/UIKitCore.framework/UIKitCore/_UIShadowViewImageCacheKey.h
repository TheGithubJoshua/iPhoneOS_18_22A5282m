@interface _UIShadowViewImageCacheKey : NSObject <NSCopying> {
    double _scale;
    double _size;
    unsigned long long _options;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(double)a0 scale:(double)a1 options:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
