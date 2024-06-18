@class NSURL, SUImageDataProvider;

@interface SUImageCacheKey : NSObject <NSCopying> {
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
