@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}

@property (readonly, nonatomic) UIImage *pretiledImage;

+ (id)cacheValueWithPretiledImage:(id)a0 cacheKey:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
