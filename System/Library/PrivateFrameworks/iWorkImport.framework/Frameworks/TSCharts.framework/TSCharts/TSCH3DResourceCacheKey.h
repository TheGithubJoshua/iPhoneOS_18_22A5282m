@class TSCH3DResource, TSCH3DResourceLoader;

@interface TSCH3DResourceCacheKey : NSObject <NSCopying> {
    long long _virtualScreen;
}

@property (readonly, nonatomic) TSCH3DResourceLoader *loader;
@property (readonly, nonatomic) TSCH3DResource *resource;

+ (id)keyWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

@end
