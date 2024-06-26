@class NSArray;
@protocol REClassLoaderConfiguration;

@interface REClassLoader : NSObject <NSCopying> {
    NSArray *_cachedDataSources;
    NSArray *_cachedBundleConfigurations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadingLock;
}

@property (readonly, nonatomic) id<REClassLoaderConfiguration> configuration;

+ (id)groupLoaderWithLoaders:(id)a0;
+ (id)loaderWithBlock:(id /* block */)a0 configuration:(id)a1;
+ (id)loaderWithDirectories:(id)a0 dataSourceKey:(id)a1 configuration:(id)a2;
+ (id)loaderWithObjects:(id)a0 configuration:(id)a1;

- (void)prewarm;
- (id)init;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (void)enumerateBundleConfigurations:(id /* block */)a0;
- (void)enumerateClassesWithBlock:(id /* block */)a0;

@end
