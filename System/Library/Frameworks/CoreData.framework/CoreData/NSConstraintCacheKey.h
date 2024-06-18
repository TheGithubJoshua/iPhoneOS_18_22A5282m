@class NSArray;

@interface NSConstraintCacheKey : NSObject <NSCopying> {
    NSArray *_values;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
